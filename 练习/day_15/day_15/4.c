//ģ��ʵ��strcat
//strcat��������:�������ַ�����������,���շ������Ӻ��ַ������׵�ַ.
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//ģ��ʵ��strcat
char *my_strcat1(char *dest, const char *src){
	char * ret = dest;
	//�Խ��ܵ�������ָ����ж���
	assert(dest);
	assert(src);
	//��dest������\0
	while (*dest)
	{
		dest++;
	}
	//��src���ݸ�����dest֮��
	while (*src){
		*dest++ = *src++;
	}
	//��dest����׷��\0
	*dest = '\0';
	return ret;
}
//�⺯����ʵ�ַ���
char *my_strcat2(char *dest, const char *src)
{
	char * cp = dest;
	//��dest������\0
	while (*cp)
	{
		cp++;
	}
	//��src���ݸ�����dest֮��
	while (*cp++ = *src++)
	{
		;
	}
	return dest;
}
int main4()
{
	char str1[20] = "Hello ";
	char str2[] = "Bit!";
	char *ret = my_strcat1(str1, str2);
	printf("%s\n", ret);
	system("pause");
	return 0;
}