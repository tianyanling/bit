//�沨�����ʽ��ֵ
//https://leetcode-cn.com/problems/evaluate-reverse-polish-notation/
#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int evalRPN(vector<string>& tokens) 
{
	int res = 0;
	stack<int> tmp;//����ջ
	for (int i = 0; i < tokens.size(); i++)
	{
		if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
		{
			int num1 = tmp.top();
			tmp.pop();
			int num2 = tmp.top();
			tmp.pop();

			if (tokens[i] == "+")
			{
				res = num1 + num2;
			}
			else if (tokens[i] == "-")
			{
				res = num2 - num1;
			}
			else if (tokens[i] == "*")
			{
				res = num1 * num2;
			}
			else
			{
				res = num2 / num1;
			}
			tmp.push(res);
		}
		else
		{
			tmp.push(stoi(tokens[i]));//stoi�����ǽ�n����ת��Ϊʮ���ƣ�stoi(�ַ�������ʼλ�ã�n����)
		}
	}
	return tmp.top();
}

int main()
{
	vector<string> tokens = { "2", "1", "+", "3", "*" };
	cout << evalRPN(tokens) << endl;
	system("pause");
	return 0;
}