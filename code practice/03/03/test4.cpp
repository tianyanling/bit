//��֤һ���ַ����Ƿ��ǻ���
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//�����ַ�����ȥ�������ֺ��ַ��������ַ�
bool isLetterOrNumber(char ch)
{
	return  (ch >= 'a' && ch <= 'z') ||
				(ch >= '0' && ch <= '9') ||
				(ch >= 'A' && ch <= 'Z');
}

//�����Сд�ַ�
bool isSame(char a, char b)
{
	return a == b ||  //��������
		(a | 1 << 5) == (b | 1 << 5);//��������ֵĲ��֣�����д��ĸת��ΪСд��ĸ
	//1����5:0000 0001 ==�� 0010 0000
	//��д��ĸA��ASCII�룺65 ==��0100 0001
	//Сд��ĸa��ASCII�룺97==��0110 0001
	//�������д��ĸת��ΪСд��ĸ
}

bool isPalindrome(string s)
{
	string tmp;

	for (auto &ch : s)
	{
		if (isLetterOrNumber(ch))
		{
			tmp.push_back(ch);
		}
	}

	int i, j;
	for (i= 0,j=tmp.size() -1;i<j;i++,j--)
	{
		if (! isSame(tmp[i], tmp[j]))
		{
			return false;
		}
	}
	return true;
}

int main4()
{
	//string s("A man, a plan, a canal : Panama");
	string s("abcdf");
	cout << isPalindrome(s) << endl;
	system("pause");
	return 0;
}