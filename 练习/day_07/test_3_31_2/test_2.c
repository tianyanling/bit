//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int pow(int n, int k)											//n���������k�������
{
	if (k == 1)
	{
		return n;
	}
	return n*pow(n, k - 1);
}

int main()
{
	int n, k;
	printf("����������ʹ��ݣ�\n");
	scanf("%d%d", &n, &k);
	printf("n^k = %d\n", pow(n, k));
	system("pause");
	return 0;
}