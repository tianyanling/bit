//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char **cp[] = { c + 3, c + 2, c + 1, c };
//	char ***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}

//int main(int argc, char * argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };相当于int a[3][2]={1,3,5,0,0,0};
//	//1 3
//	//5 0
//	//0 0
//	//逗号表达式
//	int *p=a[1];//&a[1][0]
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *str[] = { "welcome", "to", "fortemedia", "nanjing" };
//	char **p = str + 1;
//	str[0] = (*p++) + 2;
//	str[1] = *(p + 1);
//	str[2] = p[1] + 3;
//	str[3] = p[0] + (str[2] - str[1]);
//	printf("%s\n", str[0]);
//	printf("%s\n", str[1]);
//	printf("%s\n", str[2]);
//	printf("%s\n", str[3]);
//	system("pause");
//	return 0;
//}