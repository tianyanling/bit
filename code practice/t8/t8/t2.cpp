//替换空格
//用%20替换空格
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
	
	for (auto & e : s)
	{
		cout << e;
	}
	cout << endl;
}

#if 0
//牛客网运行通过
void replaceSpace(char *str, int length)
{
	string s(str);
	int i = 0;
	while ((i = s.find(' ', i))>-1) 
	{
		s.erase(i, 1);
		s.insert(i, "%20");

	}
	auto ret = s.c_str();
	strcpy(str, ret);
}
#endif

int main2()
{
	char str[] = "hello world";
	int length = sizeof(str)/sizeof(str[0]);

	replaceSpace(str, length);
	system("pause");
	return 0;
}