//#include "seqList.h"
//
//void SeqListInit(SeqList* psl, size_t capacity)
//{//初始化
//	assert(psl);//判空
//
//	psl->capacity = capacity;
//	psl->array = (SLDataType*)malloc(capacity * sizeof(SLDataType));
//	assert(psl->array);//需要但是不合适，可以用错误码直接给出提示
//
//	psl->size = 0;
//}
//
//void SeqListDestory(SeqList* psl)
//{//销毁
//	assert(psl);
//
//	if (psl->array)
//	{
//		free(psl->array);
//		psl->array = NULL;
//		psl->size = 0;
//		psl->capacity = 0;
//	}
//}
//
//void CheckCapacity(SeqList* psl)
////检查是否到达上限
//{
//	assert(psl);
//
//	if (psl->size == psl->capacity)//当大小等于上限时，需要扩容
//	{
//		psl->capacity *= 2;
//		psl->array = (SLDataType *)realloc(psl->array, psl->capacity * sizeof(SLDataType));
//	}
//}
//
////尾插法
//void SeqListPushBack(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//
//	CheckCapacity(psl);//先检查是否需要扩容，如果达到饱和状态，则扩容
//
//	psl->array[psl->size] = x;//在数组最后新增一个元素
//	psl->size++;//新增一个元素后，表长需要加1
//}
//
//void SeqListPopBack(SeqList* psl)
//{//尾删法
//	assert(psl || psl->size);//先判断顺序表是否为空
//
//	psl->size--;	//表长减1，即尾部的元素已经不在表中，下次新增元素即可覆盖该元素
//}
//
//void SeqListPushFront(SeqList* psl, SLDataType x)
//{//头插法（不常用）
//	assert(psl);
//
//	CheckCapacity(psl);
//
//	int i;
//	for (i = psl->size - 1; i >= 0; i--)
//	{
//		psl->array[i + 1] = psl->array[i];//前一个元素的向后移覆盖后面的那个元素，达到元素后移的效果
//	}
//	psl->array[0] = x;
//	psl->size++;
//}
//
//void SeqListPopFront(SeqList* psl)
//{//头删法
//	assert(psl);
//
//	psl->size--;
//	unsigned int i;
//	for (i = 0; i < psl->size; i++)
//	{
//		psl->array[i] = psl->array[i + 1];//每个元素向前移动，覆盖前一个元素
//	}
//}
//
//void SeqListPrint(SeqList* psl)
//{
//	assert(psl);
//
//	unsigned int i;
//	for (i = 0; i < psl->size; i++)
//	{
//		printf("%d ", psl->array[i]);
//	}
//	putchar('\n');
//}
//
//int SeqListFind(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//
//	unsigned int i;
//	for (i = 0; i < psl->size; i++)
//	{
//		if (psl->array[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
//{//在pos后插入一个元素
//	assert(psl || pos <= psl->size);
//
//	CheckCapacity(psl);
//
//	unsigned int i;
//	for (i = psl->size - 1; i >= pos; i--)
//	{
//		psl->array[i + 1] = psl->array[i];
//	}
//	psl->array[pos] = x;
//	psl->size++;
//}
//
//void SeqListErase(SeqList* psl, size_t pos)
//{//删除指定元素（给出该元素的位置）
//	assert(psl || pos < psl->size);
//
//	psl->size--;
//	unsigned int i;
//	for (i = pos; i < psl->size; i++)
//	{
//		psl->array[i] = psl->array[i + 1];
//	}
//}
//
//void SeqListRemove(SeqList* psl, SLDataType x)
//{//删除指定元素（不知道下标，只给出该数据的值）
//	assert(psl);
//
//	int pos = SeqListFind(psl, x);
//	if (pos >= 0)
//	{
//		SeqListErase(psl, pos);
//	}
//}
//
//void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
//{//修改一个指定位置元素的值
//	assert(psl || pos < psl->size);
//
//	psl->array[pos - 1] = x;
//}
//
//void SeqListBubbleSort(SeqList* psl)
//{	//冒泡排序
//	assert(psl);
//
//	unsigned int i;
//	unsigned int j;
//	SLDataType tmp;
//
//	for (i = 0; i < psl->size - 1; i++)
//	{
//		for (j = 0; j < psl->size - 1 - i; j++)
//		{
//			if (psl->array[j] > psl->array[j + 1])
//			{
//				tmp = psl->array[j];
//				psl->array[j] = psl->array[j + 1];
//				psl->array[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int SeqListBinaryFind(SeqList* psl, SLDataType x)
//{//二分法查找
//	assert(psl);
//
//	int left = 0;
//	int right = psl->size - 1;
//	int mid;
//
//	while (left <= right)//不要在代码块内部定义变量
//	{
//		mid = (left + right) / 2;
//		if (psl->array[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (psl->array[mid]>x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
