#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	char a[] = "123";
	char b[] = "567";
	char tmp[20];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	puts(a);
	puts(b);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	/*char *p = "123";
	char *q = "567";
	char *t;
	t = p;
	p = q; 
	q = t;
	puts(p);
	puts(q);*/
	char a[] = "asdfghjkl";
	char *p = a;
	system("pause");
	return 0;
}
#endif

#if 0
//����ָ��
int main()
{
	int a[3][4];
	int(*p)[4];//��ָ�룬��������������
	int *q[3];//��ָ�룬��������������
	int i;
	p = a;
	for (i = 0; i < 3; i++)
	{
		q[i] = a[i];
	}
	system("pause");
	return 0;
}
#endif

//����ָ��
int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return(a - b);
}

int mul(int a, int b)
{
	return(a * b);
}

int Div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
}

int Mod(int a, int b)
{
	return a%b;
}
#if 0
int main()
{//ת�Ʊ�
	int(*p[])(int, int) = { add, sub, mul, Div ,Mod};
	int n = sizeof(p) / sizeof(p[0]);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", p[i](4, 5));
	}
	system("pause");
	return 0;
}
#endif

#if 0
void test(int a, int b, int(*p)(int, int))
{
	printf("%d\n", p(a, b));
}

int main()
{
	test(4, 7, add);
}
#endif

//fn�����ķ���ֵ�Ǹ�ָ�루ָ������int xx ��int,int������ָ�룩
int(*fn(int n))(int, int)//����ָ�뺯��
{
	printf("fn:n=%d\n", n);
	return add;
}

void main()
{
	int value = fn(100)(3, 9);//add(3,9)
	printf("%d\n", value);
	system("pause");
	return 0;
}