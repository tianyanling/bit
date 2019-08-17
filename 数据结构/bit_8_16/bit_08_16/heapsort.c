#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//向下调整算法
static void AdjustDown(int *data, int size, int m)//static修饰函数是限制函数的作用域，只能在本文件使用
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
			if (data[cur * 2 + 1] > data[cur * 2 + 2])//左右孩子都存在的情况
			{
				n = cur * 2 + 1;//如果左孩子大于右孩子，即和左孩子比较，否则和右孩子比较
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (data[cur] < data[n])//该位置比确定n为下标的孩子小，则需要交换，否则直接跳出 
		{
			int tmp =data[cur];
			data[cur] =data[n];
			data[n] = tmp;

			cur = n;
		}
		else
		{
			break;
		}
	}
}

//将一个数组调整成堆，即建堆的过程
void HeapSortS(int* src, int n)
{
	int i;
	for (i = n / 2 - 1; i >= 0; i--)//从第一个非叶子结点开始向前遍历执行向下调整算法
	{
		AdjustDown(src, n, i);
	}

	for (; n > 1; n--)
	{
		SwapHeap(src, n);
	}
}

int SwapHeap(int *data,int size)
{
	if (size == 0)//判断该堆中是否有元素，即判空
	{
		return;
	}

	size--;

	//写成交换的方式，是为了堆排序
	int tmp = data[0];
	data[0] = data[size-1];//如果不是为了堆排方便，只需要这一条语句即可
	data[size-1] = tmp;

	AdjustDown(data, size-1, 0);
}

void PrintArray(int *arr, int n)
{
	int i; 
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

int main()
{
	int data[10] = { 5, 2, 4, 6, 7, 1, 3, 9, 8, 10 };

	HeapSortS(data, 10);
	PrintArray(data, 10);
	system("pause");
	return 0;
}