#include<iostream>
#include<cstring>//C�����е�string
#include<string>//C++�е�string
using namespace std;

int _main()
{
	string s1;
	string s2("caixukun");
	string s3 = s2;
	string s4(5,'6');

	s1.push_back('1');
	s1.resize(10,'n');//ֱ�����ÿռ��С�������ռ����������
				   //���Դ���������������һ�������ǿռ��С���ڶ���������д�������
				   //resize���нضϵĹ���
	//cout << s1.size() << endl;
	s1.push_back('2');
	//cout << s1.capacity() << endl;

	for (auto & i : s1)//��Χfor �ʺ�һ����begin(),��end()�ĺ���
	{
		cout << i;
	}
	cout << endl;

	string::iterator i;
	for (i = s1.begin(); i != s1.end(); i++)//��������
	{
		cout << *i;
	}
	cout << endl;

	/*
	s2.reserve(500);//ΪstringԤ���ռ䣬����ı�������С
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;

	//s1.push_back('1');
	s1.resize(100);//ֱ�����ÿռ��С�������ռ����������
	//���Դ���������������һ�������ǿռ��С���ڶ���������д�������
	//resize���нضϵĹ���
	cout << s1.size() << endl;
	//s1.push_back('2');
	cout << s1.capacity() << endl;
	*/

	/*
	cout << s1 << endl
			<< s2 << endl
			<< s3 << endl
			<< s4 << endl;
	
	cout << endl;

	cout << s1.size() << endl
			<< s2.size() << endl
			<< s3.size() << endl
			<< s4.size() << endl;
			
	cout << endl;

	//��sizeһ���������ַ�������
	cout << s1.length() << endl
			<< s2.length() << endl
			<< s3.length() << endl
			<< s4.length() << endl;

	cout << endl;

	//����ռ�����
	cout << s1.capacity() << endl
			<< s2.capacity() << endl
			<< s3.capacity() << endl
			<< s4.capacity() << endl;

	cout << endl;

	cout << s4.empty() << endl;

	cout << endl;

	//��գ����ı�ײ�ռ��С������պ�capacity�Ŀռ��С���ı䣩
	s4.clear();
	{
		cout<< s4.size() << endl;
	}

	cout << endl;

	//�п�
	cout << s4.empty() << endl;
	*/
	system("pause");
	return 0;
}