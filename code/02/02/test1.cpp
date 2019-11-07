//string
#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string s1;//构造空的string 对象
	string s2("hello");//用字符串构造string类对象
	string s3 = s2;//拷贝构造
	string s4(5, '6');//构造n个字符c，此处为构造5个6
	
	//为字符串预留空间，大小为16的倍数-1
	s1.reserve(500);
	//cout << s1.capacity() << endl;

	//直接改变size()的值,大小变成传入的这个数，如果resize()的值超过capacity，会先调用reserve()扩容，再调用resize()
	//resize()还有截断的功能
	//resize()增加元素个数时，可能会改变capacity()的大小，resize()减少元素个数时，capacity()不会改变
	s1.push_back('1');
	s1.resize(10,'n');//resize()传一个参数时，默认为0，传两个参数时为第二个参数的值，可缺省
	//cout << s1.size() << endl;
	s1.push_back('2');

	s1.resize(6);//截断功能
	s1.push_back('3');
	//cout << s1 << endl;

	for (auto &i : s1)//范围for 适用于一切有begin(),有end()的类
	{
		cout << i;
	}
	cout << endl;

	for (auto i = s1.begin(); i != s1.end(); i++)//容器遍历
	{
		cout << *i;
	}
	cout << endl;

	/*for (auto & i : s1)
	{
		printf("%d", i);
	}
	cout << endl;
	*/
	/*s4 += s3;
	s4 += "qiaobiluo";
	s4 +="zhangyixing";
	s4 += "caixukun";

	cout << s1 << endl
			<< s2 << endl
			<< s3 << endl
			<< s4 << endl;
	cout << endl;

	//在字符串中size()和length()没有区别，都是返回字符串的有效长度
	cout << s1.size() << endl
			<< s2.size() << endl
			<< s3.size() << endl
			<< s4.size() << endl;
	cout << endl;

	cout << s1.length() << endl
			<< s2.length() << endl
			<< s3.length() << endl
			<< s4.length() << endl;
	cout << endl;

	//在此环境下，默认的大小为15，每次扩容的空间为16的倍数-1，即15,31,47……
	cout << s1.capacity()<< endl
			<< s2.capacity()<< endl
			<< s3.capacity()<< endl
			<< s4.capacity()<< endl;
	cout << endl;

	//empty()用来判空，如果为空串则返回true,不为空时返回false
	cout << s4.empty() << endl;

	//将有效字符清空，不改变底层空间的大小，即不影响capacity()
	s4.clear();
	cout << s4.empty() << endl;
	cout << s4.size() << endl;
	*/

	system("pause");
	return 0;
}