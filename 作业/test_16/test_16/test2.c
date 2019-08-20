#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&arr + 1);
	printf("%d %d\n", *(arr + 1), *(ptr - 1));
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	unsigned short sht = 0;
	sht--;
	printf("%d\n", sht);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char ch = 'B' + '8' - '3';
	printf("%c\n", ch);
	system("pause");
}
#endif