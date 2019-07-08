#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void test(int arr[])
{
}

void test(int arr[10])
{
}

//void test(int *arr[])
//{
//}

void test2(int *arr[20])
{
}

//void test2(int **arr)
//{
//
//}
int main()
{
	int arr[10] = { 0 };//数组
	int *arr2[20] = { 0 };//指针数组
	test(arr);
	test2(arr2);
	system("pause");
	return 0;
}