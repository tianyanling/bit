//4. ��һ���ַ����������Ϊ:"student a am i",���㽫��������ݸ�Ϊ"i am a student".
//Ҫ����ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

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