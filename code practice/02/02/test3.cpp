#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main3()
{
	string s1;

	//���ַ���ĩβ׷�ӣ��൱�� +=
	//�������ַ���ĩβ׷��n���ַ�
	s1.append("abcd");
	s1.append("efgh");
	s1 += "ijkl";

	s1.append(2, 'c');
	cout << s1 << endl;
	system("pause");
	return 0;
}