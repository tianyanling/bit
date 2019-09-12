#include<iostream>
#include<cstring>//C语言中的string
#include<string>//C++中的string
using namespace std;

int _main()
{
	string s1;
	string s2("caixukun");
	string s3 = s2;
	string s4(5,'6');

	s1.push_back('1');
	s1.resize(10,'n');//直接重置空间大小，给多大空间就扩到多少
				   //可以传入两个参数，第一个参数是空间大小，第二个参数是写入的内容
				   //resize还有截断的功能
	//cout << s1.size() << endl;
	s1.push_back('2');
	//cout << s1.capacity() << endl;

	for (auto & i : s1)//范围for 适合一切有begin(),和end()的函数
	{
		cout << i;
	}
	cout << endl;

	string::iterator i;
	for (i = s1.begin(); i != s1.end(); i++)//容器遍历
	{
		cout << *i;
	}
	cout << endl;

	/*
	s2.reserve(500);//为string预留空间，不会改变容量大小
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;

	//s1.push_back('1');
	s1.resize(100);//直接重置空间大小，给多大空间就扩到多少
	//可以传入两个参数，第一个参数是空间大小，第二个参数是写入的内容
	//resize还有截断的功能
	cout << s1.size() << endl;
	//s1.push_back('2');
	cout << s1.capacity() << endl;
	*/

	/*
	cout << s1 << endl
			<< s2 << endl
			<< s3 << endl
			<< s4 << endl;
	
	cout << endl;

	cout << s1.size() << endl
			<< s2.size() << endl
			<< s3.size() << endl
			<< s4.size() << endl;
			
	cout << endl;

	//和size一样，计算字符串长度
	cout << s1.length() << endl
			<< s2.length() << endl
			<< s3.length() << endl
			<< s4.length() << endl;

	cout << endl;

	//计算空间容量
	cout << s1.capacity() << endl
			<< s2.capacity() << endl
			<< s3.capacity() << endl
			<< s4.capacity() << endl;

	cout << endl;

	cout << s4.empty() << endl;

	cout << endl;

	//清空，不改变底层空间大小（即清空后capacity的空间大小不改变）
	s4.clear();
	{
		cout<< s4.size() << endl;
	}

	cout << endl;

	//判空
	cout << s4.empty() << endl;
	*/
	system("pause");
	return 0;
}