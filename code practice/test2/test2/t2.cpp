//�����ַ���
//���ַ����е�ÿ�����ʵ��ã������Ų�����,�����ÿ�������Կո�ָ�
//����I like beijing.           ��������beijing.like I
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string s;
	stack<string> st;

	while (cin >> s)
	{
		st.push(s);
		string s1 = s;
		if (*(s.rbegin()) == '.')
			break;
	}
	cout << st.top();
	st.pop();
	while (!st.empty())
	{
		cout << " " << st.top();
		st.pop();
	}
	system("pause");
	return 0;
}