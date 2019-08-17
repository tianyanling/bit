#include"heap.h"
#include<stdio.h>
#include <stdlib.h>

//向下调整算法
void AdjustDown(Heap *hp, int m)
{
	int cur = m;
	int n;//下标
	while (cur * 2 + 1 < hp->size)//没有叶子结点就跳出
	{
		if (cur * 2 + 2 >= hp->size)//没有右孩子的情况，二叉树不存在没有左孩子，但有右孩子的情况 
		{
			n = cur * 2 + 1;//没有右孩子，即和左孩子比较
		}
		else
		{
			//此处为大堆
			if (hp->data[cur * 2 + 1] > hp->data[cur * 2 + 2])//左右孩子都存在的情况
			{
				n = cur * 2 + 1;//如果左孩子大于右孩子，即和左孩子比较，否则和右孩子比较
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (hp->data[cur] < hp->data[n])//该位置比确定n为下标的孩子小，则需要交换，否则直接跳出 
		{
			int tmp = hp->data[cur];
			hp->data[cur] = hp->data[n];
			hp->data[n] = tmp;

			cur = n;
		}
		else
		{
			break;
		}
	}
}

//将一个数组调整成堆，即建堆的过程
void HeapInit(Heap* hp, HPDataType* a, int n)
{
	hp->capacity = n * 2;//分配动态空间，n为数组的长度
	hp->size = n;

	hp->data = (HPDataType *)calloc(hp->capacity, sizeof(HPDataType));//calloc有两个参数

	int i;
	for (i =0; i < n; i++)
	{
		hp->data[i] = a[i];
	}

	for (i = n / 2 - 1; i >= 0; i--)//从第一个非叶子结点开始向前遍历执行向下调整算法
	{
		AdjustDown(hp, i);
	}
}

//释放
void HeapDestory(Heap* hp)
{
	if (hp->data)//避免重复free
	{
		free(hp->data);
	}
	hp->data = NULL;//置空，避免产生野指针
	hp->size = 0;
	hp->capacity = 0;
}

//插入，堆是在堆的最后一个元素后面插入
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->size == hp->capacity)//判断空间容量是否达到饱和
	{
		hp->capacity *= 2;
		hp->data = (HPDataType *)realloc(hp->data, hp->capacity);//扩容，realloc有两个参数，第一个数据来源，第二个参数是扩容的大小
	}

	int cur = hp->size;//新元素的下标，即最后一个元素的下标

	hp->data[hp->size] = x;
	hp->size++;

	//向上调整算法
	while (cur > 0)//该结点不是根结点时才会出现比较，若cur=0,则该结点为根结点，不用交换
	{
		if (hp->data[cur] > hp->data[(cur - 1) / 2])//该结点与其父亲结点比较，若比父亲结点大，则和父亲结点交换，否则跳出
		{
			int tmp = hp->data[cur];
			hp->data[cur] = hp->data[(cur - 1) / 2];
			hp->data[(cur - 1) / 2] = tmp;

			cur = (cur - 1) / 2;//交换之后这个新的结点换到其父亲结点的位置
		}
		else
		{
			break;
		}
	}
}

//堆的删除，即删除堆顶的元素。先交换首尾两个元素，然后执行向下调整算法
void HeapPop(Heap* hp)
{
	if (hp->size == 0)//判断该堆中是否有元素，即判空
	{
		return;
	}

	hp->size--;

	//写成交换的方式，是为了堆排序
	int tmp = hp->data[0];
	hp->data[0] = hp->data[hp->size];//如果不是为了堆排方便，只需要这一条语句即可
	hp->data[hp->size] = tmp;

	AdjustDown(hp, 0);
}

//返回堆顶
HPDataType HeapTop(Heap* hp)
{
	if (hp->size == 0)
	{
		return (HPDataType)0;
	}
	return hp->data[0];
}

//返回堆的大小
int HeapSize(Heap* hp)
{
	return hp->size;
}

int HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

//以层的形式打印
void HeapPrint(Heap* hp)
{
	int i;
	int rn = 0;
	int bin = 2;
	for (i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->data[i]);
		if (i == rn)
		{
			putchar('\n');
			rn += bin;
			bin *= 2;
		}
	}
	printf("\n");
}

//以数组的形式打印
void HeapPrints(Heap* hp)
{
	int i;
	for (i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->data[i]);
	}
}

//在Pop的基础上堆排序
void HeapSort(Heap* hp)
{
	int tmp = hp->size;

	while (hp->size>1)
	{
		HeapPop(hp);//核心
	}

	hp->size = tmp;
}