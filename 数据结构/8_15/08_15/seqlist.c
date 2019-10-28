#include"seqlist.h"

//初始化
void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);//判空

	psl->capacity = capacity;
	psl->array = (SLDataType *)malloc(capacity * sizeof(SLDataType));//扩容
	assert(psl->array);//对新开辟的数组判空

	psl->size = 0;
}

//销毁
void SeqListDestory(SeqList* psl)
{
	assert(psl);

	if (psl->array)
	{
		free(psl->array);//开辟动态存储空间，用完之后要释放，free之后要置空,避免产生野指针
		psl->array = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
}

//检查是否达到容量上限，若达到则需要扩容
void CheckCapacity(SeqList* psl)
{
	assert(psl);

	if (psl->size == psl->capacity)
	{
		psl->capacity *= 2;
		psl->array = (SLDataType *)realloc(psl->array, psl->capacity *sizeof(SLDataType));
	}
}

//尾插法
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);

	CheckCapacity(psl);//检查是否达到饱和状态

	psl->array[psl->size] = x;//将x插到该顺序表的尾部
	psl->size++;//新增元素后表长需要增加1
}

//尾删法
void SeqListPopBack(SeqList* psl)
{
	assert(psl);

	psl->size--;//表长减1，则表尾的最后一个元素已经不在表中，当下次新增元素后可将该元素覆盖

}

//头插法
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);

	CheckCapacity(psl);

	int i;
	for (i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];//从第一个元素开始都向后移一位，将顺序表的第一个元素位置留给新增元素
	}
	psl->array[0] = x;//将新增元素头插到顺序表中
	psl->size++;
}

//头删法
void SeqListPopFront(SeqList* psl)
{
	assert(psl);

	psl->size--;
	unsigned int i;
	for (i = 0; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//查找一个顺序表中的元素，如找到则返回该元素的下标
int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);

	unsigned int i;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//在pos后面插入一个元素
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);

	unsigned int i;
	for (i = psl->size-1; i >=pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

//删除指定元素
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);

	psl->size--;

	unsigned int i;
	for (i = pos; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//删除指定元素（不知道下标，只给出该数据的值）
void SeqListRemove(SeqList* psl, SLDataType x)
{
	assert(psl);

	int pos = SeqListFind(psl, x);

	if (pos >= 0)
	{
		SeqListErase(psl, pos);
	}
}

//修改指定元素的值
void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);

	if (pos < psl->size)
	{
		psl->array[pos] = x;
	}
}

//冒泡排序
void SeqListBubbleSort(SeqList* psl)
{
	assert(psl);

	unsigned int i, j;
	for (i = 0; i < psl->size; i++)
	{
		for (j = 0; j < psl->size -i - 1; j++)
		{
			if (psl->array[j] > psl->array[j + 1])
			{
				int tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
			}
		}
	}
}

//二分法查找
int SeqListBinaryFind(SeqList* psl, SLDataType x)
{
	assert(psl);

	int left = 0;
	int right = psl->size - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (psl->array[mid]<x)
		{
			left = mid + 1;
		}
		else if (psl->array[mid]>x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}

//打印
void SeqListPrint(SeqList* psl)
{
	assert(psl);

	unsigned int i;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->array[i]);
	}
	printf("\n");
}


