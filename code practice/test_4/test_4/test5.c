//дһ��������unsigned int �ͱ���x���ڴ��ж����Ƶ�1����
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int BitCount(unsigned int x)
{
	int count = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		count += x >> i & 1;
	}
	return count;
}
int main()
{
	unsigned int x;
	int count = 0;
	printf("������һ��������");
	scanf("%d", &x);
	count = BitCount(x);
	printf("%d\n", count);
	system("pause");
	return 0;
}