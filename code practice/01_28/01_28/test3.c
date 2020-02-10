#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a, b;
	////scanf("%d%d", &a, &b);
	//if (a > b)
	//{
	//	a = b;
	//	b = a;
	//}
	//else
	//{
	//	a++;
	//	b++;
	//}
	//printf("%d,%d", a, b);

	char s[] = "abcdefgh", *p = s;
	//p += 3;
	printf("%d\n", strlen(strcpy(p, "ABCD")));

	system("pause");
	return 0;
}