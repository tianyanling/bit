////1.һ��������ֻ�����������ǳ���һ�Σ� 
////�����������ֶ����������Ρ�
////�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h> 

void find_num(int arr[], int  sz, int *num1, int * num2)
{
	int ret = 0;
	int i = 0;
	int pos = 0;
	int tmp = 0;
	*num1 = 0;
	*num2 = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}    
	//�ҵ�num1^num2�Ľ��
	tmp = ret;
	while (ret)
	{
		if ((ret & 1) == 1) //�ҵ�һ��Ϊ1��λ
		{
			break;
		}
		ret = ret >> 1;   
		++pos;
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> pos) & 1)//�ҳ�positionλΪ1������
		{
			*num1 ^= arr[i];
		}
	}
	*num2 = *num1^tmp;
}

int main1()
{
	int arr[] = { 1,2,5,8,4,6,1,2,5,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0, num2 = 0;
	find_num(arr, sz, &num1, &num2);    //�����Ͳ���
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}