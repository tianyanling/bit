#include"heap.h"
#include<stdio.h>
#include <stdlib.h>

//���µ����㷨
void AdjustDown(Heap *hp, int m)
{
	int cur = m;
	int n;//�±�
	while (cur * 2 + 1 < hp->size)//û��Ҷ�ӽ�������
	{
		if (cur * 2 + 2 >= hp->size)//û���Һ��ӵ������������������û�����ӣ������Һ��ӵ���� 
		{
			n = cur * 2 + 1;//û���Һ��ӣ��������ӱȽ�
		}
		else
		{
			//�˴�Ϊ���
			if (hp->data[cur * 2 + 1] > hp->data[cur * 2 + 2])//���Һ��Ӷ����ڵ����
			{
				n = cur * 2 + 1;//������Ӵ����Һ��ӣ��������ӱȽϣ�������Һ��ӱȽ�
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (hp->data[cur] < hp->data[n])//��λ�ñ�ȷ��nΪ�±�ĺ���С������Ҫ����������ֱ������ 
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

//��һ����������ɶѣ������ѵĹ���
void HeapInit(Heap* hp, HPDataType* a, int n)
{
	hp->capacity = n * 2;//���䶯̬�ռ䣬nΪ����ĳ���
	hp->size = n;

	hp->data = (HPDataType *)calloc(hp->capacity, sizeof(HPDataType));//calloc����������

	int i;
	for (i =0; i < n; i++)
	{
		hp->data[i] = a[i];
	}

	for (i = n / 2 - 1; i >= 0; i--)//�ӵ�һ����Ҷ�ӽ�㿪ʼ��ǰ����ִ�����µ����㷨
	{
		AdjustDown(hp, i);
	}
}

//�ͷ�
void HeapDestory(Heap* hp)
{
	if (hp->data)//�����ظ�free
	{
		free(hp->data);
	}
	hp->data = NULL;//�ÿգ��������Ұָ��
	hp->size = 0;
	hp->capacity = 0;
}

//���룬�����ڶѵ����һ��Ԫ�غ������
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->size == hp->capacity)//�жϿռ������Ƿ�ﵽ����
	{
		hp->capacity *= 2;
		hp->data = (HPDataType *)realloc(hp->data, hp->capacity);//���ݣ�realloc��������������һ��������Դ���ڶ������������ݵĴ�С
	}

	int cur = hp->size;//��Ԫ�ص��±꣬�����һ��Ԫ�ص��±�

	hp->data[hp->size] = x;
	hp->size++;

	//���ϵ����㷨
	while (cur > 0)//�ý�㲻�Ǹ����ʱ�Ż���ֱȽϣ���cur=0,��ý��Ϊ����㣬���ý���
	{
		if (hp->data[cur] > hp->data[(cur - 1) / 2])//�ý�����丸�׽��Ƚϣ����ȸ��׽�����͸��׽�㽻������������
		{
			int tmp = hp->data[cur];
			hp->data[cur] = hp->data[(cur - 1) / 2];
			hp->data[(cur - 1) / 2] = tmp;

			cur = (cur - 1) / 2;//����֮������µĽ�㻻���丸�׽���λ��
		}
		else
		{
			break;
		}
	}
}

//�ѵ�ɾ������ɾ���Ѷ���Ԫ�ء��Ƚ�����β����Ԫ�أ�Ȼ��ִ�����µ����㷨
void HeapPop(Heap* hp)
{
	if (hp->size == 0)//�жϸö����Ƿ���Ԫ�أ����п�
	{
		return;
	}

	hp->size--;

	//д�ɽ����ķ�ʽ����Ϊ�˶�����
	int tmp = hp->data[0];
	hp->data[0] = hp->data[hp->size];//�������Ϊ�˶��ŷ��㣬ֻ��Ҫ��һ����伴��
	hp->data[hp->size] = tmp;

	AdjustDown(hp, 0);
}

//���ضѶ�
HPDataType HeapTop(Heap* hp)
{
	if (hp->size == 0)
	{
		return (HPDataType)0;
	}
	return hp->data[0];
}

//���ضѵĴ�С
int HeapSize(Heap* hp)
{
	return hp->size;
}

int HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

//�Բ����ʽ��ӡ
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

//���������ʽ��ӡ
void HeapPrints(Heap* hp)
{
	int i;
	for (i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->data[i]);
	}
}

//��Pop�Ļ����϶�����
void HeapSort(Heap* hp)
{
	int tmp = hp->size;

	while (hp->size>1)
	{
		HeapPop(hp);//����
	}

	hp->size = tmp;
}