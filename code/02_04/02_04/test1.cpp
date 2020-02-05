//��֤���Ĵ�
//https://leetcode-cn.com/problems/valid-palindrome/submissions/
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) 
{
	string tmp;
	for (int i = 0; i < s.size(); i++)//����д��ĸת��ΪСд��ĸ��ȥ��������
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			tmp.push_back(s[i] + 32);
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			tmp.push_back(s[i]);
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			tmp.push_back(s[i]);
		}
		else
		{
			continue;
		}
	}

	int left = 0;
	int right = tmp.size() - 1;

	while (left <= right)//�ж��Ƿ����
	{
		if (tmp[left] == tmp[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	string s = "race a car";

	cout << isPalindrome(s) << endl;
	system("pause");
	return 0;
}