//�ڴ�Ĵ洢
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
	//sizeof��strlende ����
	//sizeof�Ǽ����ڴ�ռ����������ڱ����ڼ����,��������ʽ��ֵ���ڼ����ַ�����ʱ\0Ҳ��һ���ַ�
	//strlen�Ǻ���,����\0��ֹͣ���㣬\0������������
	char a[] = "abc\012abc";//��б�ܼ����֣�\012�����ǰ˽��Ƶ�������һ���ַ�
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
	unsigned int a = -2;//�����ڼ��������ԭ�뷽ʽ�洢�������Բ������ʽ�洢
	printf("2=%d,a=%u\n", a, a);//%u����з��ŵ�
	system("pause");
	return 0;
}

#endif

#if 0
int main()
{//�з��ź��޷��ŵ����㶼Ҫת��Ϊ�޷��ż���
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
	char a = 258;//�洢1 00000010     ������ȡ��λ�İ�λ
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
