//5.ʵ��һ���������ж�һ�����ǲ���������

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int judgePrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;																//0��ʾ��������
		}

		return 1;																	//1��ʾ������
	}
}

int main()
	{
		int n = 0;
		printf("������һ����������\n");
		scanf("%d",&n);
		printf("%d", judgePrime(n));
		printf("\n");
		system("pause");
		return 0;
	}
