//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//int count_one_bits(unsigned int value)
//{
//	int i, count = 0;
//	for (i = value; i; i, i /=2)
//	{
//		count += i%2;
//	}
//	return count;
//}
//
//int main1()
//{
//	printf("%u\n", count_one_bits(15));
//	system("pause");
//	return 0;
//}

int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value &= value - 1)
	{ 
		count++;
	}
	return count + 1;
}

int main1()
{
	printf("%u\n", count_one_bits(15));
	system("pause");
	return 0;
}