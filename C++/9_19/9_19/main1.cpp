//�ڴ����
#include<stdio.h>
#include<stdlib.h>

//���һ���࣬����ֻ���ڶ��ϴ�������
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


//���һ���࣬����ֻ����ջ�ϴ�������
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
