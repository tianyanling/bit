#include<stdio.h>
#include<stdlib.h>
#include"sort.h"

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
//int doublePointerWay2(int *src, int start, int end)
//{
//
//}

//�ڿӷ�
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

//hoare��
int HoareWay(int *src, int start, int end)
{

}

//�����������ƶ�������ǰ�����
void dealQuickSort(int *src, int start, int end)
{
	int mid;
	if (start < end)
	{
		//mid = doublePointerWay1(src, start, end);//��׼Ԫ�ص�λ��
		mid = digWay(src, start, end);
		dealQuickSort(src, start, mid - 1);//��׼Ԫ����߲���
		dealQuickSort(src, mid + 1, end);//��׼Ԫ���ұ߲���
	}
}

//��������
void QuickSort(int *src, int n)
{
	dealQuickSort(src, 0, n - 1);
}