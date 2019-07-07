//数据在内存中的存储
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{//把一个整数转化为各种进制的形式
	int a;//= 10;
	int b;// = 16;//进制
	int r;
	//int m[10];
	int i = 0;
	char str[20] = "";
	scanf("%d%d", &a, &b);//a表示一个整数，b表示要转化的进制
	while (a != 0)
	{
	//	m[i] = a%b;
		r = a%b;
		if (r < 10)
			str[i] = r + '0';//1='0'+1
		else
			str[i] = r - 10 + 'A';//10 -> 'a'     a%b -10 +'a'
		a = a / b;
		++i;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c ", str[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//有符号的char的范围 -128 --127
	//无符号的char的范围是0--255
	char a = 0x80;//128
	unsigned char b = 0x80;
	unsigned int c = a;
	int d = a;
	printf("a = %d,a =%u\n", a,a);
	printf("b = %d,b =%u\n", b,b);
	printf("c = %d,c =%u\n", c,c);
	printf("d = %d,d =%u\n", d,d);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i;
	char str[1000];
	for (i = 0; i < 1000; i++)
	{
		str[i] = -1 - i;//当i=-256时，后八位为全0即为0，此时-1-i=255
	}
	printf("%d\n", strlen(str));//输出结果为255
	//strlen求字符串长度，若是字符串时找'\0',若是整型，则找'0'
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 3, b = 4, c = 5;
	while (a < b < c)//先计算a<b,结果只有0和1，然后该结果与c比较
	{
		int t = a;
		a = b;
		b = t;
		c--;
	}
	printf("5d,%d,%d", a, b, c);//3,4,1
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 3, b = 0, c = 5;
	int n = 0;
	while (--a && ++b && --c)
		n++;
	printf("%d,%d,%d,%d\n", a, b, c, n);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//大端:高位存在低地址，低位存在高地址
	//小端：高位存在高地址，低位存在低地址
	int a = 0x11223344;//先声明的变量地址高
	short int b = a;
	char c = a;
	printf("%x,%x,%x\n", a, b, c);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//浮点型在内存中的存储
	//SEM   32位
	//S：符号位（1位）；E：指数位（8位）；M：有效数字位（23位）
	int a = 6;
	float b = 4.6;
	printf("%d\n", (int)b);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int p ;
	for (p = 10; p < p + 10; p++)//溢出之后变成负数，p+10先溢出
	{
		;
	}
	system("pause");
	return 0;
}
#endif