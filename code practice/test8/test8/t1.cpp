//�������򷽷�
//������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷��� 
//1.�����ַ������ֵ����������磺"car" < "carriage" < "cats" < "doggies < "koala"
//2.�����ַ����ĳ����������磺"car" < "cats" < "koala" < "doggies" < "carriage"
//������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�������Ҫæ�ų���Ҷ��������Ҫ������æ��֤��

//�������� :�����һ��Ϊ�ַ�������n(n �� 100),��������n��, ÿ��һ���ַ���, �ַ������Ⱦ�С��100������Сд��ĸ���

//������� :
//�����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ����������"lexicographically",
//������ݳ������ж������ֵ����������"lengths",
//������ַ�ʽ���������"both"���������"none"

//˼·�����������У��Ƚ����ڵ������ַ����ĳ��ȣ��������е��ַ�����������ǰһ���ַ����Ⱥ�һ���ַ��������򷵻�false,���򷵻�true
//���ֵ������У�����compare()�Ƚ����ڵ������ַ����еĸ�����ĸ����ǰһ���ַ����е���ĸ�Ⱥ�һ���ַ����е���ĸ���󡱣��򷵻�false,���򷵻�true

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool lengths(string s,vector<string> vs)
{
	int i = 0;
	while ((i+1) < vs.size())
	{
		if (vs[i].size() >= vs[i + 1].size())
		{
			return false;
		}
		i++;
	}
	return true;
}

bool lexicographically(string s, vector<string> vs)
{
	int i = 0;
	while ((i + 1) < vs.size())
	{
		if (vs[i].compare(vs[i + 1]) >= 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int main1()
{
	string s;
	vector<string> vs;
	int n,i =0;
	cin >> n;

	bool t1,t2;

	while (i<n)
	{
		cin >> s;
		vs.push_back(s);
		i++;
	}
	
	t1 = lengths(s, vs);
	t2 = lexicographically(s, vs);

	if (t1 && !t2)
	{
		cout << "lengths" << endl;
	}
	else if (t2 && !t1)
	{
		cout << "lexicographically" << endl;
	}
	else if (t1 && t2)
	{
		cout << "both" << endl;
	}
	else
	{
		cout << "none" << endl;
	}

	system("pause");
	return 0;
}