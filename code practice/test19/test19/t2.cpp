//���������ַ���a,b��������Ӵ�

//��Ŀ�����������ַ���a,b��������Ӵ������ж������������϶��ַ������ȳ��ֵ��Ǹ�

//˼·�������ж������ַ����ĳ��ȣ�Ȼ����������ַ������ҹ����ַ���ʹ����ͬ�ַ�����һ����ʱ�ַ�����
//��ʱ����Ҫ����һ����ʱ�ַ������Ƚ�ÿ����ͬ�ַ����Ĵ�С������󹫹��ַ�������tmp�У����������

#include<iostream>
#include<string>
using namespace std;

string maxString(string s1, string s2)
{
	string tmp = "";
	
	for (int i =0; i<s1.size();i++)
	{
		string ret = "";
		for (int j = 0; j < s2.size(); j++)
		{
			int k = i;//Ϊ�˱���s1�����ι�ͬ�ַ����Ƚ���֮���´�s1�ı�����ʵλ�û���i
			
			while (s1[k] == s2[j])
			{
				ret += s1[k];
				k++;
				j++;
			}
			if (ret.size() > tmp.size())
			{
				tmp = ret;
			}
			ret = "";
		}	
	}
	return tmp;
}

int main()
{
	string s1;
	string s2;

	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
		{
			swap(s1, s2);
		}
		cout << maxString(s1, s2);
	}
	system("pause");
	return 0;
}