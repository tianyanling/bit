//�����
//����һ������� (ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ���ransom�ܲ����ɵڶ����ַ���magazines������ַ����ɡ�
//������Թ��ɣ����� true �����򷵻� false��

//(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼��)
#include<iostream>
#include<string>
#include<map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) 
{
	map<char, int> mp;

	if (ransomNote.size() > magazine.size())
	{
		return false;
	}

	for (size_t i = 0; i < magazine.size(); i++)//ͳ��magzine�ַ����и�����ĸ���ֵĴ���
	{
		mp[magazine[i]]++;
	}

	for (size_t j = 0; j < ransomNote.size(); j++)//ransomNote���ֵ���ĸ��map�м�ȥ
	{
		mp[ransomNote[j]]--;

		if (mp[ransomNote[j]] < 0)//��������֮��С��0��˵��ransomNote�ַ����и���ĸ�ĸ�����magazine�ַ�������ĸ�����࣬���������
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	string ransomNote = "bg";
	string magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";

	cout << canConstruct(ransomNote, magazine) << endl;
	system("pause");
	return 0;
}