//unique_ptr��������˽�л�����ֹ�����͸�ֵ���������ã�
#include<iostream>
#include<memory>
using namespace std;

class Test
{
public:
	int  m_a;
};

int main5()
{
	unique_ptr<int> ap(new int);
	unique_ptr<Test> apt(new Test);

	*ap = 5;
	apt->m_a = 6;

	cout << *ap << " " << apt->m_a << endl;

	//unique_ptr<int> ap2 = ap;//��unique_ptr���� ���п���
	cout << *ap << " " << apt->m_a << endl;//��ʱ���ִ���
	system("pause");
	return 0;
}