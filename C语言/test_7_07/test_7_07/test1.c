//�������ڴ��еĴ洢
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{//��һ������ת��Ϊ���ֽ��Ƶ���ʽ
	int a;//= 10;
	int b;// = 16;//����
	int r;
	//int m[10];
	int i = 0;
	char str[20] = "";
	scanf("%d%d", &a, &b);//a��ʾһ��������b��ʾҪת���Ľ���
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
{//�з��ŵ�char�ķ�Χ -128 --127
	//�޷��ŵ�char�ķ�Χ��0--255
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
		str[i] = -1 - i;//��i=-256ʱ�����λΪȫ0��Ϊ0����ʱ-1-i=255
	}
	printf("%d\n", strlen(str));//������Ϊ255
	//strlen���ַ������ȣ������ַ���ʱ��'\0',�������ͣ�����'0'
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 3, b = 4, c = 5;
	while (a < b < c)//�ȼ���a<b,���ֻ��0��1��Ȼ��ý����c�Ƚ�
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
{//���:��λ���ڵ͵�ַ����λ���ڸߵ�ַ
	//С�ˣ���λ���ڸߵ�ַ����λ���ڵ͵�ַ
	int a = 0x11223344;//�������ı�����ַ��
	short int b = a;
	char c = a;
	printf("%x,%x,%x\n", a, b, c);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//���������ڴ��еĴ洢
	//SEM   32λ
	//S������λ��1λ����E��ָ��λ��8λ����M����Ч����λ��23λ��
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
	for (p = 10; p < p + 10; p++)//���֮���ɸ�����p+10�����
	{
		;
	}
	system("pause");
	return 0;
}
#endif