#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()//һ��ָ��
{
	//��ָ��ָ������ȡ���ĵ�һ��Ԫ�صĵ�ַ
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12 };
	int *p = &a[0][0];
	int i;
	for (i = 0; i < 3 * 4; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p = &a[0][0];
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", *(p + 4 * i + j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif

#if 0
//�ַ�����ָ��
int main()
{//�ַ�ָ��
	char b[] = "1234";//���ַ���1234�洢��a���ٵ�����ֽڵĿռ���
	char *p = "12345";//����һ��ָ�����pָ��һ���ַ���
	//char b[10];//ֻ�ܳ�ʼ�������ܸ�ֵ
	//char *p;//�����ȶ���������ٸ�ֵ
	p = "123";
	b[3] = 'k';//���Ը�
	//*p = 'k';//���ܸģ�������
	//p++;
	puts(b);
	puts(p);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char a[] = "123";
	char b[] = "123";
	const char c[] = "123";
	const char d[] = "123";
	char *p = "123";
	char *q = "123";
	const char *pp = "123";
	const char *qq = "123";
	if (a == a)//��������һ�������ʾ����洢�ĵ�ַ��һ��
		printf("a==b\n");
	if (c == d)
		printf("c==d\n");
	if (p == q)
		printf("p == q\n");
	if (pp == qq)
		printf("pp == qq\n");
	if (p == pp)
		printf("p == pp\n");
	system("pause");//������������
	return 0;
}
#endif