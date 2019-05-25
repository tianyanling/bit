#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	//fopen:打开本工程的源文件，只写文件名即可
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	system("pause");
//	return 0;
//}
//
//void *my_memcpy(void *dest, const void *src, size_t count)
//{
//	void *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20] = "abcdef"; 
//	char str2[20];// = "123";
//	char arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char arr2[10] = { 9, 8, 0 };
//	gets(str2);
//	my_memcpy(str1, str2, 2);
//	puts(str1);
//	//memcpy(arr1, arr2, 2 * sizeof(int));
//	//memcpy(arr1, arr2+2, 5 * sizeof(int));//5表示拷贝的个数，从arr2+2拷贝到arr1中
//	//memcpy(arr1 + 2, arr1, 4 * sizeof(int));
//	system("pause");
//	return 0;
//}

int main()
{
	char a[20] = "abcdef";
	char b[20] = "123";
	//memmove(a, b, 3);
	//memmove(a, a + 2, 3);
	memmove(a, a + 2, 3);
	puts(a);
	system("pause");
	return 0;
}
