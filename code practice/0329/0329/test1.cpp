//����2018ʵϰ����Ƹ������-C ����ʵϰ��-������

#include <iostream>
using namespace std;

/*��һ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int *p = arr;
	*(p++) += 89;
	printf("%d,%d\n", *p, *(++p));//printf��ջ�ṹ����ִ��*(++p),��ִ��*p,������������3,3
	return 0;
}
*/

/*�ڶ���
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
	cout << obj1.get_a() << endl << obj1.get_b() << endl;//������������12
	//��Ϊ�κγ�Ա����Ĺ��캯����������������˳����ã�
	//������˳��Ϊint b,a����������Ϊ12,12
	return 0;
}
*/


class A
{
	char a[2];//sizeof(a) = 2
public:
	virtual void aa() {};//sizeof����ķ�����size + 4*�麯��ָ��ĸ���(size�Ƕ������ֽڴ�С)
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
	cout << "sizeof Base1 " << sizeof(Base1) << endl;//32λ��4��64λ��8
	cout << "sizeof Base1 " << sizeof(Base2) << endl;//32λ��4��64λ��8
	cout << "sizeof FromOne " << sizeof(DerivedFromOne) << endl;//32λ��4��64λ��8
	cout << "sizeof FromTwo " << sizeof(DerivedFromTwo) << endl;//32λ��8��64λ��16
	getchar();
}
*/