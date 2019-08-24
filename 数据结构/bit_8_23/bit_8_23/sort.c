#include<stdio.h>
#include<stdlib.h>
#include"sort.h"

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
//int doublePointerWay2(int *src, int start, int end)
//{
//
//}

//挖坑法
int digWay(int * src, int start, int end)
{
	int a = start;
	int b = end;
	int flag = 0;
	int tmp = *src;

	while (1)
	{
		while (b>start && src[b] >= tmp)
		{
			b--;
		}
		if (a < b)
		{
			src[a] = src[b];
		}
		else
		{
			src[a] = tmp;
			return a;
		}

		while (a<end && src[a] <= tmp)
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

//hoare法
int HoareWay(int *src, int start, int end)
{

}

//快速排序类似二叉树的前序遍历
void dealQuickSort(int *src, int start, int end)
{
	int mid;
	if (start < end)
	{
		//mid = doublePointerWay1(src, start, end);//基准元素的位置
		mid = digWay(src, start, end);
		dealQuickSort(src, start, mid - 1);//基准元素左边部分
		dealQuickSort(src, mid + 1, end);//基准元素右边部分
	}
}

//快速排序
void QuickSort(int *src, int n)
{
	dealQuickSort(src, 0, n - 1);
}