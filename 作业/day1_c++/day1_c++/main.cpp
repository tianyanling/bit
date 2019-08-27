#include<iostream>
using namespace std;
//1��дһ���������ӿڣ�����ɶ�������С�������� 
//2���ӿ��жഫ��һ��ȱʡ�����������ָ�����Ͳ���A����ʽ�����ָ���ˣ��Ͱ�����ѡ���������ʽ�����ٰ������֣���
//3���������Ļ����ϣ���ɶԽṹ�������ͨ�������жϴ�С�ĺ�����ʵ�֡�

void Insertsort(int *src, int n)
{
	int i, j;
	int tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];

		for (j = i; j > 0 && src[j - 1] > tmp; j--)
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

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

void SelectSort(int *src, int n)
{
	int i, j, k, tmp;
	for (i = 0; i < n - 1; i++)
	{
		int min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (src[j] < src[min_index])
			{
				min_index = j;
			}
		}
		if (i != min_index)
		{
			tmp = src[i];
			src[i] = src[min_index];
			src[min_index] = tmp;
		}
	}
}

int main()
{
	int a[] = { 2,3,1,6,5,8 };
	float f[] = { 1.2,4.2,6.4,7.9,3.3,9.0 };
	system("pause");
	return 0;
}