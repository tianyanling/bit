//排序
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"
#define BUFSIZE 10000

void printArray(int *src, int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf("%d ", src[i]);
	}
	putchar('\n');
}

int main()
{
#if 0
	int src[10] = { 1,3,6,7,9,2,4,8,10,5};

	//SelectSort(src, 11);

	//BubbleSort(src, 11);

	//InsertSort(src, 11);

	//ShellSort(src, 11);

	//MergeSort(src, 11);

	//QuickSort(src, 11);

	//QuickSortNonR(src, 11);

	HeapSort(src, 10);

	printArray(src, 10);
#else
	srand((unsigned int)time(NULL));//设置随机种子

	int src[BUFSIZE];

	int i;
	for (i = 0;i < BUFSIZE;i++)
	{
		src[i] = rand() % 5000 + 1;
	}

	//BubbleSort(src, BUFSIZE);

	//SelectSort(src, BUFSIZE);

	//InsertSort(src, BUFSIZE);

	//ShellSort(src, BUFSIZE);

	//MergeSort(src, BUFSIZE);

	//QuickSort(src, BUFSIZE);

	//QuickSortNonR(src, BUFSIZE);

	HeapSort(src, BUFSIZE);

	printArray(src, BUFSIZE);
#endif

	system("pause");
	return 0;
}