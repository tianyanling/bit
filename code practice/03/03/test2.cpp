//���ַ����е�һ��ֻ����һ�ε��ַ�,����ֻ����Сд�ַ�
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int firstUniqChar(string s)
{
	int count[26] = { 0 };//count[]����ͳ�Ƹ����ַ��ĸ���
	for (auto &ch : s)
	{
		count[ch - 'a']++;
	}

	//ͳ�Ƴ����ַ��ĸ���
	/*int j = 0;
	for (auto & i : count)
	{
		cout << (char)('a' + (j++)) << ' ' << i << endl;
	}*/

	for (int i = 0; i < s.size();i++)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;//�����±�
		}
	}
	return -1;
}

int main2()
{
	string s;

	cin >> s;

	cout << firstUniqChar(s) << endl;
	system("pause");
	return 0;
}