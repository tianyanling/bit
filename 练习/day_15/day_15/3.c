//3.ģ��ʵ��strcpy 
//strcpy�������ǽ�һ���ַ��������ݸ��Ƶ�����һ���ַ������У������ַ������ս��

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
char * my_strcpy(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (*dest++ = *src++)
		//�Ƚ����˸����ٽ�����++������ֵ���ս����\0��ʱ��������while���ж��������˳�ѭ��
		//����ʱ�Ѿ������е����ݸ����Ƶ��ַ���������
	{
		;
	}
	return ret;
}

int main3()
{
	char a[10];//��������㹻��Ŀռ䣬ʹ���ܽ��ַ���ȫ����
	char *q = "bcd";
	printf("%s\n", my_strcpy(a, q));
	system("pause");
	return 0;
}