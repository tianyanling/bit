#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
using namespace std;

int main4()
{
	string s1;
	char str[1000] = { 0 };
	//c语言中scanf遇到空格就结束，在C++中依然存在这个问题，可以用getline来解决这个问题
	cin >> s1;

	cout << s1;

	//正则表达式，遇到\n就结束，[ ]内的内容可以改，可以进行内容的筛选
	//C语言的两种解决方案
	//方案一
	//scanf("%[^\n]", str);
	//方案二
	//fgets(str, 1000, stdin);

	//C++中的解决办法
	cin.getline(str, 1000);//第二个参数表示可以显示字符个数
	getline(cin, s1);//第一个参数为输入流,第二个参数表示容器
	cout << str << endl;

	/*string s1 = "xiao zhu bei pei fei";
	cout << s1.find("pei pei")<<endl;
	cout << s1.find("pei pei", 0,4)<<endl;

	cout << s1.rfind('x') << endl;

	cout << s1.substr(0, 8) << endl;

	//+ 的重载不是容器的成员， += 才是
	cout << s1.operator +=("123")<<endl;*/
	system("pause");
	return 0;
}