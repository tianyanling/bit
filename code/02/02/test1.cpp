//string
#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string s1;//����յ�string ����
	string s2("hello");//���ַ�������string�����
	string s3 = s2;//��������
	string s4(5, '6');//����n���ַ�c���˴�Ϊ����5��6
	
	//Ϊ�ַ���Ԥ���ռ䣬��СΪ16�ı���-1
	s1.reserve(500);
	//cout << s1.capacity() << endl;

	//ֱ�Ӹı�size()��ֵ,��С��ɴ��������������resize()��ֵ����capacity�����ȵ���reserve()���ݣ��ٵ���resize()
	//resize()���нضϵĹ���
	//resize()����Ԫ�ظ���ʱ�����ܻ�ı�capacity()�Ĵ�С��resize()����Ԫ�ظ���ʱ��capacity()����ı�
	s1.push_back('1');
	s1.resize(10,'n');//resize()��һ������ʱ��Ĭ��Ϊ0������������ʱΪ�ڶ���������ֵ����ȱʡ
	//cout << s1.size() << endl;
	s1.push_back('2');

	s1.resize(6);//�ضϹ���
	s1.push_back('3');
	//cout << s1 << endl;

	for (auto &i : s1)//��Χfor ������һ����begin(),��end()����
	{
		cout << i;
	}
	cout << endl;

	for (auto i = s1.begin(); i != s1.end(); i++)//��������
	{
		cout << *i;
	}
	cout << endl;

	/*for (auto & i : s1)
	{
		printf("%d", i);
	}
	cout << endl;
	*/
	/*s4 += s3;
	s4 += "qiaobiluo";
	s4 +="zhangyixing";
	s4 += "caixukun";

	cout << s1 << endl
			<< s2 << endl
			<< s3 << endl
			<< s4 << endl;
	cout << endl;

	//���ַ�����size()��length()û�����𣬶��Ƿ����ַ�������Ч����
	cout << s1.size() << endl
			<< s2.size() << endl
			<< s3.size() << endl
			<< s4.size() << endl;
	cout << endl;

	cout << s1.length() << endl
			<< s2.length() << endl
			<< s3.length() << endl
			<< s4.length() << endl;
	cout << endl;

	//�ڴ˻����£�Ĭ�ϵĴ�СΪ15��ÿ�����ݵĿռ�Ϊ16�ı���-1����15,31,47����
	cout << s1.capacity()<< endl
			<< s2.capacity()<< endl
			<< s3.capacity()<< endl
			<< s4.capacity()<< endl;
	cout << endl;

	//empty()�����пգ����Ϊ�մ��򷵻�true,��Ϊ��ʱ����false
	cout << s4.empty() << endl;

	//����Ч�ַ���գ����ı�ײ�ռ�Ĵ�С������Ӱ��capacity()
	s4.clear();
	cout << s4.empty() << endl;
	cout << s4.size() << endl;
	*/

	system("pause");
	return 0;
}