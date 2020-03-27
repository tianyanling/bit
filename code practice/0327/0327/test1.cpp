//栈的压入、弹出序列
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
	if (pushV.size() == 0 || popV.size() == 0 || pushV.size() != popV.size())
	{
		return false;
	}

	stack<int> m_data;

	for (int i = 0, j = 0; i < pushV.size(); i++)
	{
		m_data.push(pushV[i]);
		while (j < popV.size() && m_data.top() == popV[j])
		{
			m_data.pop();
			j++;
		}
	}
	return m_data.empty();
}

int main()
{
	vector<int> pushV{ 1,2,3,4,5 };
	vector<int> popV{ 4,5,3,1,2 };

	cout << IsPopOrder(pushV, popV) << endl;
	system("pause");
	return 0;
}
