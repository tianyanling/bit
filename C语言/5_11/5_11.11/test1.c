#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//���������еĽϴ�ֵ
#if 0
int main()
{
	int a = 5, b = 7;
	int max = (a + b + abs(a - b)) / 2;
	printf("%d\n", max);
	system("pause");
	return 0;
}
#endif

#if 0
//sizeof�������
//strlen�Ǻ���
void main()
{
	char a[] = "abc\012abc";			//\0��������ֱ�ʾ�˽��Ƶ�����012��ʾ10
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n=%d,m=%d\n", n, m);
	n = strlen(a);							//strlen����\0�������ڣ�����\0��ֹͣ
	m = strlen(b);
	printf("n=%d,m=%d\n", n, m);
	system("pause");
}
//������n=8,m=8
//n=7,m=3
#endif
#if 0
void main()
{
	unsigned int a = -2;
	printf("a=%d,a=%u\n", a, a);		//������a=-2, a=4294967294
	system("pause");
}
//�����ڼ��������ԭ��洢�������ڼ�������Բ���洢
#endif

#if 0
void main()
{
	int a = 10;
	unsigned int b = 5;
	if (a + b > 0)
		printf(">0\n");
	else
		printf("<0\n");
	system("pause");
}
#endif

#if 0
void main()
{
	char a = 258;//1 00000010    �ӵ�λ��ȡ�����Ϊ2
	printf("%d\n",a);		//������Ϊ2
	system("pause");
}
#endif

void main()
//����ת��
{
	int a, b, r;
	int i = 0;
	char str[20] = "";
	printf("��������������(��һ����Ϊ�������ڶ�����Ϊת��������)��");
	scanf("%d%d", &a, &b);
	while (a != 0)
	{
		r = a%b;
		if (r < 10)
		{
			str[i] = r + '0';
		}
		else
		{
			str[i] = r - 10 + 'A';
		}
		a = a / b;
		++i;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c ", str[i]);
	}
	printf("\n");
	system("pause");
}