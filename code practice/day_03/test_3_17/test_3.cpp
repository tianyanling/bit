//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9) 
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}