#include<iostream>
using namespace std;

void reverseString(char *s, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		char tmp;
		tmp = s[start];
		s[start++] = s[end];
		s[end--] = tmp;
	}
}

int main2()
{
	char s[] = "hello";

	reverseString(s, 5);

	cout << s << ' ';
	cout << endl;
	system("pause");
	return 0;
}