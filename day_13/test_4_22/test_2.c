//���Ͼ��� 
//���飺
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

//��һ����ά����.�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);			//ʱ�临�Ӷ�С��O(N)˵��ֻ����һ��ѭ��
//����ÿ�С�ÿ�ж��ǵ��������Դ������Ͻǿ�ʼ���������
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Find(int arr[3][3], int row, int col)    //��ʱ��arr��ָ�룬�ȼ��ڣ�*arr��[3]
//����������Ϊint arr[3][3],�����п���дΪint arr[][3],Ϊ�˲�����һ��дΪint arr[3][3]
{
	int input = 0;
	int row1 = row - 1;
	int col1 = 0;
	printf("������Ҫ���ҵ�ֵ��\n");
	scanf("%d",&input);
	while (row1 < row && col1 < col)
	{
		if (arr[row1][col1] == input)
		{
			return 1;
			//���ڷ���1���������򷵻�0
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
//��ά����Ķ���
	//����int[][]={1,2}   �Ǵ����
	//��ά��������������飬�ڶ���[]�����ͣ���һ��[]�Ǹ�����
	//��ȷд����int a[3][3]   ��   int a[][3]
	printf("%d\n",Find(arr,3,3));
	system("pause");
	return 0;
}


