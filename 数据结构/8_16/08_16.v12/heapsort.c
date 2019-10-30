#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//���µ����㷨
static void AdjustDown(int *data, int size, int m)//static���κ��������ƺ�����������ֻ���ڱ��ļ�ʹ��
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
			if (data[cur * 2 + 1] > data[cur * 2 + 2])//���Һ��Ӷ����ڵ����
			{
				n = cur * 2 + 1;//������Ӵ����Һ��ӣ��������ӱȽϣ�������Һ��ӱȽ�
			}
			else
			{
				n = cur * 2 + 2;
			}
		}

		if (data[cur] < data[n])//��λ�ñ�ȷ��nΪ�±�ĺ���С������Ҫ����������ֱ������ 
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

//��һ����������ɶѣ������ѵĹ���
void HeapSortS(int* src, int n)
{
	int i;
	for (i = n / 2 - 1; i >= 0; i--)//�ӵ�һ����Ҷ�ӽ�㿪ʼ��ǰ����ִ�����µ����㷨
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
	if (size == 0)//�жϸö����Ƿ���Ԫ�أ����п�
	{
		return;
	}

	size--;

	//д�ɽ����ķ�ʽ����Ϊ�˶�����
	int tmp = data[0];
	data[0] = data[size-1];//�������Ϊ�˶��ŷ��㣬ֻ��Ҫ��һ����伴��
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