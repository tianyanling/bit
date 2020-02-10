//模拟实现strcat
//strcat函数功能:将两个字符串连接起来,最终返回连接后字符串的首地址.
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//模拟实现strcat
char *my_strcat1(char *dest, const char *src){
	char * ret = dest;
	//对接受到的两个指针进行断言
	assert(dest);
	assert(src);
	//将dest遍历至\0
	while (*dest)
	{
		dest++;
	}
	//将src内容复制在dest之后
	while (*src){
		*dest++ = *src++;
	}
	//在dest后面追加\0
	*dest = '\0';
	return ret;
}
//库函数中实现方法
char *my_strcat2(char *dest, const char *src)
{
	char * cp = dest;
	//将dest遍历至\0
	while (*cp)
	{
		cp++;
	}
	//将src内容复制在dest之后
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