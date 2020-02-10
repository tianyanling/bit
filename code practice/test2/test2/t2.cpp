//倒置字符串
//将字符串中的每个单词倒置，标点符号不倒置,输出的每个单词以空格分隔
//例：I like beijing.           结果输出：beijing.like I
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