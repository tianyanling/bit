//����һ��������5λ����������
//��1��������Ǽ�λ��
//��2���ֱ����ÿһλ����
//��3�������������λ���֣�����ԭ��Ϊ3221��Ӧ���123

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int count = 0;
	printf("������һ��������5λ������������");
	scanf("%d",&n);
	if (n > 9999 || n < 0)
	{
		printf("����������������룡\n");
	}
	while (n !=0)
	{
		n = n / 10;
		count++;
	}
	printf("������%dλ��\n",count);
	system("pause");
	return 0;
}