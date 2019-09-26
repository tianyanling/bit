//内存管理
#include<stdio.h>
#include<stdlib.h>

//设计一个类，该类只能在堆上创建对象
class HeapOnly
{
	int m_a;
	HeapOnly():
	m_a(0)
	{

	}
public:
	static HeapOnly * createObject();

};

HeapOnly * HeapOnly::createObject()
{
	HeapOnly * ho = new HeapOnly;
	return ho;
}


//设计一个类，该类只能在栈上创建对象
class StackOnly
{
	StackOnly()
	{

	}
public:
	static StackOnly creatObject()
	{
		return StackOnly();
	}
};


int main1()
{

	system("pause");
	return 0;
}
