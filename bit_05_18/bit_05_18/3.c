//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//void mymalloc(char *p)
//{
//	static char a[100];
//	*p = a;
//}
//
//int main()
//{
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//没有\0,不确定
	//printf("%d\n", strlen(arr + 0));
	////printf("%d\n", strlen(*arr));
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr));//char (*)[6]
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr));//6
	////printf("%d\n", strlen(&arr + 1));//不确定
	//printf("%d\n", strlen(&arr[0] + 1));//5

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//6
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 6;
//	int *p = &a;
//	printf("%p\n", p );
//	printf("%p\n", p + 1);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (short*)p + 1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	system("pause");
//	return 0;//}