////1.一个数组中只有两个数字是出现一次， 
////其他所有数字都出现了两次。
////找出这两个只出现一次的数字，编程实现。
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
	//找到num1^num2的结果
	tmp = ret;
	while (ret)
	{
		if ((ret & 1) == 1) //找到一个为1的位
		{
			break;
		}
		ret = ret >> 1;   
		++pos;
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> pos) & 1)//找出position位为1数的数
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
	find_num(arr, sz, &num1, &num2);    //返回型参数
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}