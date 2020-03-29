//网易2018实习生招聘笔试题-C 开发实习生-云音乐

#include <iostream>
using namespace std;

/*第一题
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int *p = arr;
	*(p++) += 89;
	printf("%d,%d\n", *p, *(++p));//printf是栈结构，先执行*(++p),再执行*p,所以输出结果是3,3
	return 0;
}
*/

/*第二题
class base1 {
private: int a, b;
public:
	base1(int i) : b(i + 1), a(b) {}
	base1() :b(0), a(b) {}
	int get_a() { return a; }
	int get_b() { return b; }
};
int main()
{
	base1 obj1(11);
	cout << obj1.get_a() << endl << obj1.get_b() << endl;//结果是随机数，12
	//因为任何成员对象的构造函数按照它们声明的顺序调用；
	//若调用顺序为int b,a，则输出结果为12,12
	return 0;
}
*/


class A
{
	char a[2];//sizeof(a) = 2
public:
	virtual void aa() {};//sizeof计算的方法：size + 4*虚函数指针的个数(size是对齐后的字节大小)
};
class B :public virtual A
{
	char b[2];
	char a[2];
public:
	virtual void bb() {};
	virtual void aa() {};//
};
class C :public virtual B
{
	char a[2];
	char b[2];
	char c[2];
public:
	virtual void cc() {};
	virtual void aa() {};
	virtual void bb() {};
};
int main1()
{
	//int data[] = { 1,2,3,4 };
	char data[2];
	//cout << sizeof(data) << endl;
	cout << sizeof(A) << endl << sizeof(B) << endl << sizeof(C);
	return 0;
}


/*
class Base1 {
	virtual void fun1() {}
	virtual void fun11() {}
public:
	virtual ~Base1();
};

class Base2 {
	virtual void fun2() {}
};

class DerivedFromOne : public Base2
{
	virtual void fun2() {}
	virtual void fun22() {}//0+4*1=4
};

class DerivedFromTwo : public Base1, public Base2
{
	virtual void fun3() {}//0+4*2=8
};

void main()
{
	cout << "sizeof Base1 " << sizeof(Base1) << endl;//32位：4；64位：8
	cout << "sizeof Base1 " << sizeof(Base2) << endl;//32位：4；64位：8
	cout << "sizeof FromOne " << sizeof(DerivedFromOne) << endl;//32位：4；64位：8
	cout << "sizeof FromTwo " << sizeof(DerivedFromTwo) << endl;//32位：8；64位：16
	getchar();
}
*/