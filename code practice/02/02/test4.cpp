#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
using namespace std;

int main4()
{
	string s1;
	char str[1000] = { 0 };
	//c������scanf�����ո�ͽ�������C++����Ȼ����������⣬������getline������������
	cin >> s1;

	cout << s1;

	//������ʽ������\n�ͽ�����[ ]�ڵ����ݿ��Ըģ����Խ������ݵ�ɸѡ
	//C���Ե����ֽ������
	//����һ
	//scanf("%[^\n]", str);
	//������
	//fgets(str, 1000, stdin);

	//C++�еĽ���취
	cin.getline(str, 1000);//�ڶ���������ʾ������ʾ�ַ�����
	getline(cin, s1);//��һ������Ϊ������,�ڶ���������ʾ����
	cout << str << endl;

	/*string s1 = "xiao zhu bei pei fei";
	cout << s1.find("pei pei")<<endl;
	cout << s1.find("pei pei", 0,4)<<endl;

	cout << s1.rfind('x') << endl;

	cout << s1.substr(0, 8) << endl;

	//+ �����ز��������ĳ�Ա�� += ����
	cout << s1.operator +=("123")<<endl;*/
	system("pause");
	return 0;
}