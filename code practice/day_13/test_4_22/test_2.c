//杨氏矩阵 
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

//有一个二维数组.数组的每行从左到右是递增的，每列从上到下是递增的.在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);			//时间复杂度小于O(N)说明只能用一个循环
//由于每行、每列都是递增，所以从最右上角开始遍历最合适
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Find(int arr[3][3], int row, int col)    //此时的arr是指针，等价于（*arr）[3]
//主函数定义为int arr[3][3],函数中可以写为int arr[][3],为了不出错一般写为int arr[3][3]
{
	int input = 0;
	int row1 = row - 1;
	int col1 = 0;
	printf("请输入要查找的值：\n");
	scanf("%d",&input);
	while (row1 < row && col1 < col)
	{
		if (arr[row1][col1] == input)
		{
			return 1;
			//存在返回1，不存在则返回0
			break;
		}
		else
		{
			if (arr[row1][col1] > input)
			{
				row1--;
			}
			else
			{
				col1++;
			}
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
//二维数组的定义
	//例：int[][]={1,2}   是错误的
	//二维数组是数组的数组，第二个[]是类型，第一个[]是个数，
	//正确写法：int a[3][3]   或   int a[][3]
	printf("%d\n",Find(arr,3,3));
	system("pause");
	return 0;
}


