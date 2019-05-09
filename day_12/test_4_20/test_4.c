//4. 有一个字符数组的内容为:"student a am i",请你将数组的内容改为"i am a student".
//要求不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void reverse_part(char *str, int stard,int end)
{
	int i,j;
	int tmp;
	for (i = stard, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main()
{
	char src[] = "student a am i";
	int stard = 0, end, i;
	for (i = 0; i < src[i]; i++)
	{
		if (src[i] == ' ')
		{
			end = i - 1;
			reverse_part(src, stard, end);
			stard = i + 1;
		}
	}
	reverse_part(src, stard, i - 1);
	reverse_part(src, 0, i - 1);
	printf("%s\n",src);
	system("pause");
	return 0;
}