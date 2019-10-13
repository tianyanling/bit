//字节对齐问题
#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct S1
	{
		char c1;//1
		int i;//8
		char c2;//12
		int e;//16
	};
	//printf("%d\n", sizeof(struct S1));

	struct S2
	{
	char c1;//1
	char c2;//2
	int i;//8
	};
	//printf("%d\n", sizeof(struct S2));

	struct S3
	{
		double d;//8
		char c;//16
		int i;//16
	};
	//printf("%d\n", sizeof(struct S3));

	struct S4
	{
	char c1;//1//嵌套结构体对齐到结构体的最大对齐数
	struct S3 s3;//24
	double d;//32
	};
	printf("%d\n", sizeof(struct S4));

	struct S5
	{
		char a;//1
		int b;//8
		double c;//16
		char d;//24
		int e;//24
		double f;//32
	};
	//printf("%d\n", sizeof(struct S5));

	struct A
	{
		int _a : 2;
		int _b : 5;
		int _c : 10;
		int _d : 30;
	};
	//printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}