//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n)
{
	int m = 0;
	int sum = 0;
	if (n !=0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;
}

int main()
{
	int n;
	printf("������һ����������\n");
	scanf("%d",&n);
	printf("��λ��֮��Ϊ��%d", DigitSum(n));
	printf("\n");
	system("pause");
	return 0;
}