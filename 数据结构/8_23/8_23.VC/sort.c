#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
#include"queue.h"

//ð������
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

//ֱ��ѡ������
void SelectSort(int *src, int n)
{
	int i, j, tmp;
	for (i = 0; i < n-1; i++)//����n-1��ѡ��
	{
		int min_index = i;//�ҳ���iС�������ڵ�λ��
		for (j = i +1; j < n ; j++)
		{
			if (src[j] < src[min_index])
			{
				min_index = j;
			}
		}

		if(i != min_index)//����iС���������ڵ�I��λ�ã�����պþͲ����˽���
		{
			tmp = src[i];
			src[i] = src[min_index];
			src[min_index] = tmp;
		}
	}
}

//ֱ�Ӳ�������
void InsertSort(int *src, int n)
{
	int i, j;
	int tmp;

	for (i = 1;i < n;i++)//���Ŵӵڶ���Ԫ�ؿ�ʼ����һ��Ԫ�ز�������
	{
		tmp = src[i];//���浱ǰԪ�أ�Ȼ���ǰһ��Ԫ�ؽ��бȽϣ����tmp��ǰһ��Ԫ��С���򽻻�λ�ã�������ǰ���Ԫ�رȽϣ�С��Ԫ����ǰ��

		for (j = i;j > 0 && src[j - 1] > tmp; j--)
		{
			src[j] = src[j - 1];
		}

		src[j] = tmp;
	}
}

//ϣ������
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

				for (j = i; j >= gap && src[j - gap] > tmp; j -= gap)//ֱ�Ӳ�������
				{
					src[j] = src[j - gap];
				}

				src[j] = tmp;
			}
		}
	}
}

//���µ����㷨 
static void AdjustDown(int *src, int size, int m)//static���κ��������ƺ�����������ֻ���ڱ��ļ�ʹ��
{
	int cur = m;
	int n;//�±�
	while (cur * 2 + 1 < size)//û��Ҷ�ӽ�������
	{
		if (cur * 2 + 2 >= size)//û���Һ��ӵ������������������û�����ӣ������Һ��ӵ���� 
		{
			n = cur * 2 + 1;//û���Һ��ӣ��������ӱȽ�
		}
		else
		{
			//�˴�Ϊ���
			if (src[cur * 2 + 1] > src[cur * 2 + 2])//���Һ��Ӷ����ڵ����
			{
				n = cur * 2 + 1;//������Ӵ����Һ��ӣ��������ӱȽϣ�������Һ��ӱȽ�
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (src[cur] < src[n])//��λ�ñ�ȷ��nΪ�±�ĺ���С������Ҫ����������ֱ������ 
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
	if (size == 0)//�жϸö����Ƿ���Ԫ�أ����п�
	{
		return;
	}

	size--;

	//д�ɽ����ķ�ʽ����Ϊ�˶�����
	int tmp = src[0];
	src[0] = src[size];//�������Ϊ�˶��ŷ��㣬ֻ��Ҫ��һ����伴��
	src[size] = tmp;

	AdjustDown(src, size, 0);
}

//��һ����������ɶѣ������ѵĹ���
void HeapSort(int* src, int n)
{
	int i;
	for (i = n / 2 -1; i >= 0; i--)//�ӵ�һ����Ҷ�ӽ�㿪ʼ��ǰ����ִ�����µ����㷨
	{
		AdjustDown(src, n, i);
	}

	for (; n > 1; n--)
	{
		SwapHeap(src, n);
	}
}

//ʵ�ֹ鲢����ľ����㷨�����÷���˼�룬��Ϊ���֡��롰�ϡ���������
void dealMergeSort(int * src, int * tmp, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);//����˼�룬�ȷ֣��ù���Ϊ���֡���ǰһ����
	dealMergeSort(src, tmp, mid + 1, end);//���֡��ĺ󲿷�

	//����˼���еġ��ϡ�
	int a = start;//ָ��ǰ�벿��Ԫ�ص�ָ��
	int b = mid + 1;//ָ���벿��Ԫ�ص�ָ��
	int c = start;//ָ����ʱ�����ָ��
	//����ָ��ֱ�ָ�������������ʼλ�ã�a��b����ָ��ָ���Ԫ�ؽ��бȽϣ���С��Ԫ�ش�����ʱ������

	while (a <= mid && b <= end)
	{
		if (src[a] < src[b])//˭С��˭������ʱ�����У���ָ������ָ���1
		{
			tmp[c] = src[a];
			a++;
		}
		else
		{
			tmp[c] = src[b];
			b++;
		}
		c++;//���۰�Ϊ����c�����У�ָ�붼Ҫ��1
	}

	for (; a <= mid; a++, c++)//��b����Ϊ��ʱ����a������ʣ�µ�Ԫ�ض�������ʱ����c��
	{
		tmp[c] = src[a];
	}

	for (; b <= end; b++, c++)//��a����Ϊ��ʱ����b������ʣ�µ�Ԫ�ض�������ʱ����c��
	{
		tmp[c] = src[b];
	}

	int i;
	for (i = start; i <= end; i++)//����ʱ�����Ԫ���ڸ��ص�ԭ����������
	{
		src[i] = tmp[i];
	}
}

//�鲢����
void MergeSort(int *src, int n)//�����Ľӿڣ�����������������
{
	int * tmp = (int *)malloc(n * sizeof(int));//������ʱ�ռ�

	dealMergeSort(src, tmp, 0, n - 1);

	free(tmp);//�ͷ���ʱ�ռ�
}

//��������
void swapArgs(int * pa, int * pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//˫ָ�뷨1
int doublePointerWay1(int *src, int start, int end)
{
	int a = start;//��Ҫ��������ָ�룬�ֱ�ָ������ͷ������β
	int b = end;
	int flag = 0;//���flag=1ִ��a++,����ִ��b--

	while (src[b] > src[a])//�ҵ���һ��Ҫ�����ĵ�
	{
		b--;
	}

	while (a<b)
	{
		swapArgs(src + b, src + a);//�Ƚ������ж�
		flag = !flag;

		while (src[b] >= src[a])
		{
			flag ? a++ : b--;//����flag�жϣ�Ҫ����a++����b--
		}
	}
	return flag ? b : a;//���flag=1,ִ��b�����flag=0,ִ��a
}

//˫ָ�뷨2
int doublePointerWay2(int *src, int start, int end)
{
	int a = start;
	int b = end - 1;
	int mid = (start + end) / 2;//��ʱsrc[mid]Ϊ��ŦԪ
	swapArgs(src + mid, src + end);//����ŦԪ�����һ��Ԫ�ؽ���������ŦԪ��������

	while (a<=b)
	{
		while(a < end && src[a]<= src[end])//��ʱsrc[end]Ϊ��ŦԪ,aָ�������ߣ��ҵ�����Ŧ�����Ԫ��ͣ����
		{
			a++;
		}

		while (b >0 && src[b] >= src[end])//b�����ߣ��ҵ�����ŦԪС��Ԫ��ͣ����
		{
			b--;
		}

		if (a == b && (a == 0 || b == end))//��ͷ��β���ʱ��ֱ��������������ѭ��
		{
			break;
		}

		if (a < b)//a,b��ǰ��ָ��Ԫ�ؽ��бȽϣ���a<b����н���
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end);//������ŦԪ����ȥ
	return a;
}

//�ڿӷ�
int digWay(int * src, int start, int end)
{
	int a = start;
	int b = end;
	int flag = 0;//flag=0,ִ��b--,����ִ��a++
	int tmp = src[start];//�����׼ֵ

	while (1)
	{
		while (b>start && src[b] >= tmp)//βָ�������ߣ��ұȻ�׼ֵС��Ԫ��
		{
			b--;
		}
		if (a < b)//��ͷָ����βָ��û�н���ʱ��βָ��ָ���Ԫ��ֱ�Ӹ���ͷָ��ָ���Ԫ��
		{
			src[a] = src[b];
		}
		else//��ָ����βָ�뽻��ʱ����βָ��������û���ҵ��Ȼ�׼ֵС��Ԫ��˵����׼ֵ����������С��Ԫ�أ���ֱ�ӽ���׼ֵ���ǵ�ͷָ��ָ���Ԫ��
		{
			src[a] = tmp;
			return a;
		}

		while (a<end && src[a] <= tmp)//ͷָ�������ߣ��ұȻ�׼ֵ���Ԫ��
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

//Hoare��
int HoareWay(int *src, int start, int end)
{
	int a = start + 1;
	int b = end - 2;//���һ��Ԫ��Ϊð���������Ǹ����������ڶ���Ϊ��׼ֵ
	int mid = (start + end) / 2;

	if (src[start] > src[mid])//����������
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

	if (end - start <= 2)//�������Ԫ�����ֻ�����������Ѿ��ź���ֱ������
	{
		return mid;
	}
	
	swapArgs(src + mid,src + end - 1);


	while (a <= b)
	{
		while (a < end-1 && src[a] <= src[end-1])//��ʱsrc[end-1]Ϊ��׼ֵ,aָ�������ߣ��ҵ��Ȼ�׼ֵ���Ԫ��ͣ����
		{
			a++;
		}

		while (b >1 && src[b] >= src[end-1])//b�����ߣ��ҵ��Ȼ�׼ֵС��Ԫ��ͣ����
		{
			b--;
		}

		if (a == b && (a == 1 || b == end-1))//��ͷ��β���ʱ��ֱ��������������ѭ��
		{
			break;
		}

		if (a < b)//a,b��ǰ��ָ��Ԫ�ؽ��бȽϣ���a<b����н���
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end -1);//���ѻ�׼ֵ����ȥ
	return a;
}

//�ǵݹ�����
void QuickSortNonR(int *src, int n)
{
	int start = 0, end = n - 1;
	int mid;
	Queue qu;

	QueueInit(&qu);

	QueuePush(&qu, 0);//start��end ��ӣ���0��n-1���
	QueuePush(&qu, n-1);

	while (!QueueIsEmpty(&qu))//�������
	{
		start = QueueTop(&qu);
		QueuePop(&qu);
		end = QueueTop(&qu);
		QueuePop(&qu);

		mid = HoareWay(src, start, end);

		if (start < mid)//���Ӵ��ھ����
		{
			QueuePush(&qu, start);
			QueuePush(&qu, mid);
		}

		if (mid+1 < end)//�Һ��Ӵ��ھ����
		{
			QueuePush(&qu, mid+1);
			QueuePush(&qu, end);
		}

	}
	QueueDestory(&qu);
}

//�����������ƶ�������ǰ�����
void dealQuickSort(int *src, int start, int end)
{
	int mid;
	if (start + 8 < end)
	{
		//mid = doublePointerWay2(src, start, end);//��׼Ԫ�ص�λ��
		mid = HoareWay(src, start, end);
		dealQuickSort(src, start, mid - 1);//��׼Ԫ����߲���
		dealQuickSort(src, mid + 1, end);//��׼Ԫ���ұ߲���
	}
	else
	{
		InsertSort(src + start, end - start + 1);
	}
}

//��������
void QuickSort(int *src, int n)
{
	dealQuickSort(src, 0, n - 1);
}