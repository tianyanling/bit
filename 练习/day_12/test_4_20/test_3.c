//3.���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = { 2, 8, 4, 2, 7, 9, 4, 7, 8 };
	int i;
	int res = 0;
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		res ^= a[i];
	}
	printf("%d\n",res);
	system("pause");
	return 0;
}