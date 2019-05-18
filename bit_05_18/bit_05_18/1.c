//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	char a = -128;
//	char b = -127;
//	char c = -126;
//	printf("%d,%d,%d", a, b, c);
//	printf("%u,%u,%u", a,b, c);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed b = -1;
//	unsigned c = -1;
//	printf("%d,%d,%d", a, b, c);
//	printf("%u,%u,%u", a, b, c);
//	system("pause");
//	return 0;
//}

//浮点类型的存储
//int main()
//{
//	int n = 9;
//	float *pFloat = (float*)&n;
//	printf("n的值为：%d\n",n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	system("pause");
//	return 0;
//}

//排序(回调函数)
//int cmp(const void *p1, const void *p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	qsort(arr, n, sizeof(int), cmp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

