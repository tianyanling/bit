//�ַ����������һ�����ʵĳ���
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main3()
{
	string s;
	getline(cin, s);//�˴�������cinֱ�������ַ����������ո�ͻ��������getline�����������

	int pos = s.rfind(' ');
	
	cout << s.size() - pos - 1 << endl;
	system("pause");
	return 0;
}