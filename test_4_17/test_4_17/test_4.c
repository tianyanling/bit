//4.���ʵ�֣� ����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299,������� : 7

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int BitDiff(int m, int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (m % 2 != n % 2)
		{
			count++;
		}
		m /= 2;
		n /= 2;
	}
	return count;
}
int main4()
{
	int count = 0;
	 int m, n;
	printf("������������������\n");
	scanf("%d%d",&m,&n);
	int ret=BitDiff(m, n);
	printf("%d\n",  ret);
	system("pause");
	return 0;
}