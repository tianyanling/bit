#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
#include"queue.h"

//冒泡排序
void BubbleSort(int *src, int n)
{
	int i, j;
	int tmp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (src[j] > src[j + 1])
			{
				tmp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = tmp;
			}
		}
	}
}

//直接选择排序
void SelectSort(int *src, int n)
{
	int i, j, tmp;
	for (i = 0; i < n-1; i++)//进行n-1轮选择
	{
		int min_index = i;//找出第i小的数所在的位置
		for (j = i +1; j < n ; j++)
		{
			if (src[j] < src[min_index])
			{
				min_index = j;
			}
		}

		if(i != min_index)//将第i小的数，放在第I个位置，如果刚好就不用了交换
		{
			tmp = src[i];
			src[i] = src[min_index];
			src[min_index] = tmp;
		}
	}
}

//直接插入排序
void InsertSort(int *src, int n)
{
	int i, j;
	int tmp;

	for (i = 1;i < n;i++)//插排从第二个元素开始，第一个元素不用排序
	{
		tmp = src[i];//保存当前元素，然后和前一个元素进行比较，如果tmp比前一个元素小，则交换位置，继续和前面的元素比较，小的元素向前移

		for (j = i;j > 0 && src[j - 1] > tmp; j--)
		{
			src[j] = src[j - 1];
		}

		src[j] = tmp;
	}
}

//希尔排序
void ShellSort(int *src, int n)
{
	int i, j, k;
	int tmp, gap = n / 2;

	for (gap = n / 2; gap; gap /= 2)
	{
		for (k = 0; k < gap; k++)
		{
			for (i = gap + k; i < n; i += gap)
			{
				tmp = src[i];

				for (j = i; j >= gap && src[j - gap] > tmp; j -= gap)//直接插入排序
				{
					src[j] = src[j - gap];
				}

				src[j] = tmp;
			}
		}
	}
}

//向下调整算法 
static void AdjustDown(int *src, int size, int m)//static修饰函数是限制函数的作用域，只能在本文件使用
{
	int cur = m;
	int n;//下标
	while (cur * 2 + 1 < size)//没有叶子结点就跳出
	{
		if (cur * 2 + 2 >= size)//没有右孩子的情况，二叉树不存在没有左孩子，但有右孩子的情况 
		{
			n = cur * 2 + 1;//没有右孩子，即和左孩子比较
		}
		else
		{
			//此处为大堆
			if (src[cur * 2 + 1] > src[cur * 2 + 2])//左右孩子都存在的情况
			{
				n = cur * 2 + 1;//如果左孩子大于右孩子，即和左孩子比较，否则和右孩子比较
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (src[cur] < src[n])//该位置比确定n为下标的孩子小，则需要交换，否则直接跳出 
		{
			int tmp = src[cur];
			src[cur] = src[n];
			src[n] = tmp;

			cur = n;
		}
		else
		{
			break;
		}
	}
}

int SwapHeap(int *src, int size)
{
	if (size == 0)//判断该堆中是否有元素，即判空
	{
		return;
	}

	size--;

	//写成交换的方式，是为了堆排序
	int tmp = src[0];
	src[0] = src[size];//如果不是为了堆排方便，只需要这一条语句即可
	src[size] = tmp;

	AdjustDown(src, size, 0);
}

//将一个数组调整成堆，即建堆的过程
void HeapSort(int* src, int n)
{
	int i;
	for (i = n / 2 -1; i >= 0; i--)//从第一个非叶子结点开始向前遍历执行向下调整算法
	{
		AdjustDown(src, n, i);
	}

	for (; n > 1; n--)
	{
		SwapHeap(src, n);
	}
}

//实现归并排序的具体算法，利用分治思想，分为“分”与“合”两个部分
void dealMergeSort(int * src, int * tmp, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);//分治思想，先分，该过程为“分”的前一部分
	dealMergeSort(src, tmp, mid + 1, end);//“分”的后部分

	//分治思想中的“合”
	int a = start;//指向前半部分元素的指针
	int b = mid + 1;//指向后半部分元素的指针
	int c = start;//指向临时数组的指针
	//三个指针分别指向三个数组的起始位置，a和b两个指针指向的元素进行比较，较小的元素存在临时数组中

	while (a <= mid && b <= end)
	{
		if (src[a] < src[b])//谁小把谁存在临时数组中，且指向它的指针加1
		{
			tmp[c] = src[a];
			a++;
		}
		else
		{
			tmp[c] = src[b];
			b++;
		}
		c++;//无论把为存在c数组中，指针都要加1
	}

	for (; a <= mid; a++, c++)//当b数组为空时，把a数组中剩下的元素都存在临时数组c中
	{
		tmp[c] = src[a];
	}

	for (; b <= end; b++, c++)//当a数组为空时，把b数组中剩下的元素都存在临时数组c中
	{
		tmp[c] = src[b];
	}

	int i;
	for (i = start; i <= end; i++)//把临时数组的元素在赋回到原来的数组中
	{
		src[i] = tmp[i];
	}
}

//归并排序
void MergeSort(int *src, int n)//给外界的接口，不是真正是排序函数
{
	int * tmp = (int *)malloc(n * sizeof(int));//申请临时空间

	dealMergeSort(src, tmp, 0, n - 1);

	free(tmp);//释放临时空间
}

//交换函数
void swapArgs(int * pa, int * pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//双指针法1
int doublePointerWay1(int *src, int start, int end)
{
	int a = start;//需要定义两个指针，分别指向数组头和数组尾
	int b = end;
	int flag = 0;//如果flag=1执行a++,否则执行b--

	while (src[b] > src[a])//找到第一次要交换的点
	{
		b--;
	}

	while (a<b)
	{
		swapArgs(src + b, src + a);//先交换再判断
		flag = !flag;

		while (src[b] >= src[a])
		{
			flag ? a++ : b--;//根据flag判断，要进行a++还是b--
		}
	}
	return flag ? b : a;//如果flag=1,执行b；如果flag=0,执行a
}

//双指针法2
int doublePointerWay2(int *src, int start, int end)
{
	int a = start;
	int b = end - 1;
	int mid = (start + end) / 2;//此时src[mid]为枢纽元
	swapArgs(src + mid, src + end);//将枢纽元与最后一个元素交换，将枢纽元保护起来

	while (a<=b)
	{
		while(a < end && src[a]<= src[end])//此时src[end]为枢纽元,a指针向右走，找到比枢纽按大的元素停下来
		{
			a++;
		}

		while (b >0 && src[b] >= src[end])//b向左走，找到比枢纽元小的元素停下来
		{
			b--;
		}

		if (a == b && (a == 0 || b == end))//当头和尾相等时，直接跳出，避免死循环
		{
			break;
		}

		if (a < b)//a,b当前所指的元素进行比较，若a<b则进行交换
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end);//最后把枢纽元换回去
	return a;
}

//挖坑法
int digWay(int * src, int start, int end)
{
	int a = start;
	int b = end;
	int flag = 0;//flag=0,执行b--,否则执行a++
	int tmp = src[start];//保存基准值

	while (1)
	{
		while (b>start && src[b] >= tmp)//尾指针向左走，找比基准值小的元素
		{
			b--;
		}
		if (a < b)//当头指针与尾指针没有交错时，尾指针指向的元素直接覆盖头指针指向的元素
		{
			src[a] = src[b];
		}
		else//当指针与尾指针交错时（即尾指针向左走没有找到比基准值小的元素说明基准值该数组中最小的元素），直接将基准值覆盖到头指针指向的元素
		{
			src[a] = tmp;
			return a;
		}

		while (a<end && src[a] <= tmp)//头指针向右走，找比基准值大的元素
		{
			a++;
		}
		if (a < b)
		{
			src[b] = src[a];
		}
		else
		{
			src[b] = tmp;
			return b;
		}
	}
}

//Hoare法
int HoareWay(int *src, int start, int end)
{
	int a = start + 1;
	int b = end - 2;//最后一个元素为冒泡中最大的那个数，倒数第二个为基准值
	int mid = (start + end) / 2;

	if (src[start] > src[mid])//三个数排序
	{
		swapArgs(src + start, src + mid);
	}
	if (src[mid] > src[end])
	{
		swapArgs(src + mid, src + end);
	}
	if (src[start] > src[mid])
	{
		swapArgs(src + start, src + mid);
	}

	if (end - start <= 2)//该数组的元素最多只有三个，则已经排好序，直接跳出
	{
		return mid;
	}
	
	swapArgs(src + mid,src + end - 1);


	while (a <= b)
	{
		while (a < end-1 && src[a] <= src[end-1])//此时src[end-1]为基准值,a指针向右走，找到比基准值大的元素停下来
		{
			a++;
		}

		while (b >1 && src[b] >= src[end-1])//b向左走，找到比基准值小的元素停下来
		{
			b--;
		}

		if (a == b && (a == 1 || b == end-1))//当头和尾相等时，直接跳出，避免死循环
		{
			break;
		}

		if (a < b)//a,b当前所指的元素进行比较，若a<b则进行交换
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end -1);//最后把基准值换回去
	return a;
}

//非递归排序
void QuickSortNonR(int *src, int n)
{
	int start = 0, end = n - 1;
	int mid;
	Queue qu;

	QueueInit(&qu);

	QueuePush(&qu, 0);//start和end 入队，即0和n-1入队
	QueuePush(&qu, n-1);

	while (!QueueIsEmpty(&qu))//层序遍历
	{
		start = QueueTop(&qu);
		QueuePop(&qu);
		end = QueueTop(&qu);
		QueuePop(&qu);

		mid = HoareWay(src, start, end);

		if (start < mid)//左孩子存在就入队
		{
			QueuePush(&qu, start);
			QueuePush(&qu, mid);
		}

		if (mid+1 < end)//右孩子存在就入队
		{
			QueuePush(&qu, mid+1);
			QueuePush(&qu, end);
		}

	}
	QueueDestory(&qu);
}

//快速排序类似二叉树的前序遍历
void dealQuickSort(int *src, int start, int end)
{
	int mid;
	if (start + 8 < end)
	{
		//mid = doublePointerWay2(src, start, end);//基准元素的位置
		mid = HoareWay(src, start, end);
		dealQuickSort(src, start, mid - 1);//基准元素左边部分
		dealQuickSort(src, mid + 1, end);//基准元素右边部分
	}
	else
	{
		InsertSort(src + start, end - start + 1);
	}
}

//快速排序
void QuickSort(int *src, int n)
{
	dealQuickSort(src, 0, n - 1);
}