//�̳�
#include<iostream>
#include<cstdlib>
using namespace std;

//�̳п������Ӵ���ĸ�����
//�����������������ͬ����ʱ������ı��������أ������ܲ�Ҫ�ñ�������
//ֻҪ��������ͬ�����ܲ����б�ͷ���ֵ���ͣ����ͳ�������
//private�����ɼ̳С����ɷ���
//protected���ɼ̳С����ɷ���
//public���ɼ̳С��ɷ���
//�̳�Ȩ�޺ͻ����Ȩ���ĸ�С�͸����ĸ���
//һ��ʹ�ù����ж���public
//classĬ�ϼ̳з�ʽΪprivate��structĬ�ϼ̳з�ʽΪpublic
class TestBase
{
public:
	int m_a;
	TestBase(int i) ://������û��Ĭ�Ϲ���ʱ��������Ĭ�Ϲ���ʱ���ܵ���
		m_a(i)
	{

	}

	void func()
	{
		cout << "���Ǹ���ĺ���" << endl;
	}
};

//������ڴ�ռ�ȸ�����ڴ�ռ�����Կ��԰�����ָ��ǿתΪ����ָ��,���ǲ��ܰѸ���ָ��ǿתΪ����ָ��
class Test : public TestBase
{
public:
	int m_a;
	Test(int a, int b) ://���û���Ĺ��캯��ʱֻ���ó�ʼ���б�
		TestBase(a),
		m_a(b)
	{

	}

	void func()
	{
		cout << TestBase::m_a << endl;//�������ڿ����� ����:: �����Ա �����ʻ����Ա
		cout << "��������ĺ���" << endl;
	}
};

int main1()
{
#if 0
	Test t(5,6);

	//t.m_a = 7;//���ɷ��ʣ�˽�м̳н�����Ķ����������˽��
	//t.m_a = 7;
#else if
	Test *pt = new Test(5, 6);
	TestBase *ptb = pt;//����ָ��ǿת�ɸ���ָ��

	//cout << pt->m_a << endl;
	//cout << ptb->m_a << endl;

	pt->func();
	ptb->func();
#endif
	system("pause");
	return 0;
}