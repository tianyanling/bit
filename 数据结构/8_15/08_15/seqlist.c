#include"seqlist.h"

//��ʼ��
void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);//�п�

	psl->capacity = capacity;
	psl->array = (SLDataType *)malloc(capacity * sizeof(SLDataType));//����
	assert(psl->array);//���¿��ٵ������п�

	psl->size = 0;
}

//����
void SeqListDestory(SeqList* psl)
{
	assert(psl);

	if (psl->array)
	{
		free(psl->array);//���ٶ�̬�洢�ռ䣬����֮��Ҫ�ͷţ�free֮��Ҫ�ÿ�,�������Ұָ��
		psl->array = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
}

//����Ƿ�ﵽ�������ޣ����ﵽ����Ҫ����
void CheckCapacity(SeqList* psl)
{
	assert(psl);

	if (psl->size == psl->capacity)
	{
		psl->capacity *= 2;
		psl->array = (SLDataType *)realloc(psl->array, psl->capacity *sizeof(SLDataType));
	}
}

//β�巨
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);

	CheckCapacity(psl);//����Ƿ�ﵽ����״̬

	psl->array[psl->size] = x;//��x�嵽��˳����β��
	psl->size++;//����Ԫ�غ����Ҫ����1
}

//βɾ��
void SeqListPopBack(SeqList* psl)
{
	assert(psl);

	psl->size--;//����1�����β�����һ��Ԫ���Ѿ����ڱ��У����´�����Ԫ�غ�ɽ���Ԫ�ظ���

}

//ͷ�巨
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);

	CheckCapacity(psl);

	int i;
	for (i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];//�ӵ�һ��Ԫ�ؿ�ʼ�������һλ����˳���ĵ�һ��Ԫ��λ����������Ԫ��
	}
	psl->array[0] = x;//������Ԫ��ͷ�嵽˳�����
	psl->size++;
}

//ͷɾ��
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

//����һ��˳����е�Ԫ�أ����ҵ��򷵻ظ�Ԫ�ص��±�
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

//��pos�������һ��Ԫ��
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

//ɾ��ָ��Ԫ��
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

//ɾ��ָ��Ԫ�أ���֪���±ֻ꣬���������ݵ�ֵ��
void SeqListRemove(SeqList* psl, SLDataType x)
{
	assert(psl);

	int pos = SeqListFind(psl, x);

	if (pos >= 0)
	{
		SeqListErase(psl, pos);
	}
}

//�޸�ָ��Ԫ�ص�ֵ
void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);

	if (pos < psl->size)
	{
		psl->array[pos] = x;
	}
}

//ð������
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

//���ַ�����
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

//��ӡ
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


