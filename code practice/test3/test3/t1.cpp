//�ַ������ҳ�������������ִ�
//����abcd12345ed125ss123456789   ������Ϊ��123456789
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

int main1()
{
	string s;
	string count;
	string str;

	getline(cin, s);
	int maxcount = 0;

	int i;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')//ɸѡ����
		{
			count.push_back(s[i]);
	
			while (s[i + 1] >= '0' && s[i + 1] <= '9')//�ж����ִ����֣�������Щ���ִ�pushҪ��һ���ַ�����
			{
				i++;
				count.push_back(s[i]);
			}

			if (count.size() > maxcount)//�ж��������ִ��ĳ��̣�����ϳ������ִ�
			{
				maxcount = count.size();
				str = count;
			}
		}
		count.clear();

		if (maxcount < count.size())
		{
			maxcount = count.size();
			str = count;
		}
	}
	cout << str<<endl;
	system("pause");
	return 0;
}