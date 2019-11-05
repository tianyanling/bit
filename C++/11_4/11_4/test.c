//×Ö·û´®·´×ª
#include<stdio.h>
#include<stdlib.h>

void reverseString(char *s, int n)
{
	int start = 0;
	int end = n-1;

	while (start < end)
	{
		char tmp;
		tmp = s[start];
		s[start++] = s[end];
		s[end--] = tmp;
	}
}

int main1()
{
	char s[] = "hello";
	//int n = sizeof(s) / sizeof(s[0]);

	reverseString(s,5);

	printf("%s\n", s);
	system("pause");
	return 0;
}