#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
//	FILE f;//定义文件类型的变量（一般不用，一般定义文件类型的指针）
	FILE *fpr = NULL,*fpw=NULL;
	char c;
	fpr = fopen("C:\\Users\\DELL\\Desktop\\1.txt", "r");
	fpw = fopen("C:\\Users\\DELL\\Desktop\\1.txt", "w");
	if (fpr == NULL)
	{
		printf("open fail\n");
		system("pause");
		return 0;
	}

	while ((c = fgetc(fpr)) != EOF)
	{
		putchar(c);
		fputc(c, fpw);
	}
	fclose(fpr);
	fpr = NULL;
	fclose(fpw);
	fpw = NULL;
	system("pause");
	return 0;
}