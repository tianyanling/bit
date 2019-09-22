#include<iostream>
using namespace std;

//结构体A1的字节为16（向最大元素对齐）
struct A1
{
	int a;
	double b;
};

//结构体A2的字节为24
struct A2
{
	int b;
	A1 a;
};

struct A3
{//成员变量
	int a;
	double b;
	char c;

	//函数不占结构体的空间，此时struct是一个作用域，它的空间为成员变量所占的空间
	void printA()//成员函数
	{//在成员函数中可以直接使用自己的成员变量
		printf("%d\n", a);
	}

	void printB();
};

void A3::printB()
{
	printf("%f\n", b);
}

/*namespace n1
{
	int a;
	int printA()
	{
		printf("%d\n", a);//不能使用结构体里的成员变量
	}
}
*/

//空结构体保留一个字节
struct A4
{

};

int main()
{
	printf("%d,%d,%d.%d\n", sizeof(A1), sizeof(A2), sizeof(A3),sizeof(A4));//16,24,24

	A3 test;
	test.a = 5;
	test.printA();
	test.b = 3.14;
	test.printB();
	//printf("%p,%p,%p\n",)
	system("pause");
	return 0;
}