//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
#include<iostream>
#include<string>
using namespace std;

void replaceSpace(char *str, int length) 
{
	string s;
	for (int i = 0; i < length; i++)
	{
		
		if (str[i] != ' ')
		{
			s.push_back(str[i]);
		}
		else
		{
			s.push_back('%');
			s.push_back('2');
			s.push_back('0');
		}
	}
	cout << s << endl;
}

int main()
{
	char *str = "We Are Happy";
	int length = strlen(str);
	replaceSpace(str, length);
	system("pause");
	return 0;
}