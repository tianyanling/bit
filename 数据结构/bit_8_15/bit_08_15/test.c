//#include "seqList.h"
//
//void SeqListInit(SeqList* psl, size_t capacity)
//{//��ʼ��
//	assert(psl);//�п�
//
//	psl->capacity = capacity;
//	psl->array = (SLDataType*)malloc(capacity * sizeof(SLDataType));
//	assert(psl->array);//��Ҫ���ǲ����ʣ������ô�����ֱ�Ӹ�����ʾ
//
//	psl->size = 0;
//}
//
//void SeqListDestory(SeqList* psl)
//{//����
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
////����Ƿ񵽴�����
//{
//	assert(psl);
//
//	if (psl->size == psl->capacity)//����С��������ʱ����Ҫ����
//	{
//		psl->capacity *= 2;
//		psl->array = (SLDataType *)realloc(psl->array, psl->capacity * sizeof(SLDataType));
//	}
//}
//
////β�巨
//void SeqListPushBack(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//
//	CheckCapacity(psl);//�ȼ���Ƿ���Ҫ���ݣ�����ﵽ����״̬��������
//
//	psl->array[psl->size] = x;//�������������һ��Ԫ��
//	psl->size++;//����һ��Ԫ�غ󣬱���Ҫ��1
//}
//
//void SeqListPopBack(SeqList* psl)
//{//βɾ��
//	assert(psl || psl->size);//���ж�˳����Ƿ�Ϊ��
//
//	psl->size--;	//����1����β����Ԫ���Ѿ����ڱ��У��´�����Ԫ�ؼ��ɸ��Ǹ�Ԫ��
//}
//
//void SeqListPushFront(SeqList* psl, SLDataType x)
//{//ͷ�巨�������ã�
//	assert(psl);
//
//	CheckCapacity(psl);
//
//	int i;
//	for (i = psl->size - 1; i >= 0; i--)
//	{
//		psl->array[i + 1] = psl->array[i];//ǰһ��Ԫ�ص�����Ƹ��Ǻ�����Ǹ�Ԫ�أ��ﵽԪ�غ��Ƶ�Ч��
//	}
//	psl->array[0] = x;
//	psl->size++;
//}
//
//void SeqListPopFront(SeqList* psl)
//{//ͷɾ��
//	assert(psl);
//
//	psl->size--;
//	unsigned int i;
//	for (i = 0; i < psl->size; i++)
//	{
//		psl->array[i] = psl->array[i + 1];//ÿ��Ԫ����ǰ�ƶ�������ǰһ��Ԫ��
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
//{//��pos�����һ��Ԫ��
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
//{//ɾ��ָ��Ԫ�أ�������Ԫ�ص�λ�ã�
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
//{//ɾ��ָ��Ԫ�أ���֪���±ֻ꣬���������ݵ�ֵ��
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
//{//�޸�һ��ָ��λ��Ԫ�ص�ֵ
//	assert(psl || pos < psl->size);
//
//	psl->array[pos - 1] = x;
//}
//
//void SeqListBubbleSort(SeqList* psl)
//{	//ð������
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
//{//���ַ�����
//	assert(psl);
//
//	int left = 0;
//	int right = psl->size - 1;
//	int mid;
//
//	while (left <= right)//��Ҫ�ڴ�����ڲ��������
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
