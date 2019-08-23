//内存的存储
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
//int main()
//{
//int a = 5, b = 7;
//int max = (a + b + abs(a - b)) / 2;
//printf("%d\n",max);
//}

#if 0
int main()
{
	//sizeof与strlende 区别
	//sizeof是计算内存空间的运算符，在编译期间进行,不计算表达式的值，在计算字符个数时\0也算一个字符
	//strlen是函数,遇到\0即停止计算，\0不包含在其中
	char a[] = "abc\012abc";//反斜杠加数字（\012）表是八进制的数，算一个字符
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n = %d,m = %d\n", n, m);//n=8,m=8
	n = strlen(a);
	m = strlen(b);
	printf("n = %d, m = %d\n", n, m);//n=7,m=3

	system("pause");
	return 0;
}
#endif

#if 0
int fn()
{
	printf("fn\n");
	return 0;
}
int main()
{
	int a = 6;
	//int n = sizeof(a++);
	int n = sizeof(fn());
	printf("n=%d,a=%d\n", n, a);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	unsigned int a = -2;//正数在计算机中以原码方式存储，负数以补码的形式存储
	printf("2=%d,a=%u\n", a, a);//%u输出有符号的
	system("pause");
	return 0;
}

#endif

#if 0
int main()
{//有符号和无符号的运算都要转化为无符号计算
	int a = -10;
	unsigned int b = 5;
	if (a + b > 0)
		printf(">0\n");//>0
	else
		printf("<0\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char a = 258;//存储1 00000010     输出结果取低位的八位
	printf("%d\n", a);
	system("pause");
	return 0;
}
#endif

int main()
{
	int a = 10;
	int b = 2;
	int m[10];
	int i = 0;
	while (a != 0)
	{
		m[i] = a%b;
	}
	system("pause");
	return 0;
}
