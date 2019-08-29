//C++��ҵ1
#include<iostream>
using namespace std;
//1��дһ���������ӿڣ�����ɶ�������С�������� 
//2���ӿ��жഫ��һ��ȱʡ�����������ָ�����Ͳ���A����ʽ�����ָ���ˣ��Ͱ�����ѡ���������ʽ�����ٰ������֣���
//3���������Ļ����ϣ���ɶԽṹ�������ͨ�������жϴ�С�ĺ�����ʵ�֡�

/*void InsertSort(int *src, int n)
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
}*/

void InsertSort(float *src, int n)
{
	int i, j;
	float tmp;
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

bool cmpnum(int a, int b)
{
	return a < b;
}

void InsertSort(int *src, int n, bool(*cmp)(int, int) = cmpnum)
{
	int i, j;
	int tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];

		for (j = i; j > 0 && cmp(tmp, src[j - 1]); j--)//��cmp�ص�
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

void BubbleSort(float *src, int n)
{
	int i, j;
	float tmp;
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
	int i, j, tmp;
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

void SelectSort(float *src, int n)
{
	int i, j;
	float tmp;
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

void sort(int *src, int n, int flag = 0)
{
	switch (flag)
	{
	case 0:
		InsertSort(src, n);
		break;
	case 1:
		BubbleSort(src, n);
		break;
	case 2:
		SelectSort(src, n);
		break;
	default:
		break;
	}
}

void sort(float *src, int n, int flag = 0)
{
	switch (flag)
	{
	case 0:
		InsertSort(src, n);
		break;
	case 1:
		BubbleSort(src, n);
		break;
	case 2:
		SelectSort(src, n);
		break;
	default:
		break;
	}
}

bool cmptestway(int a, int b)//�������
{
	return a < b;
}

int main1()
{
	int a[6] = { 2,3,1,6,5,8 };
	float f[6] = { 1.2,4.2,6.4,7.9,3.3,9.0 };

	//InsertSort(a, 6,cmptestway);
	//InsertSort(f, 6);
	sort(a, 6, 1);
	sort(f, 6, 2);

	for (auto i : a)
	{
		cout << i << endl;
	}

	for (auto i : f)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}