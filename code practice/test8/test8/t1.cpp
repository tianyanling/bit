//两种排序方法
//考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法： 
//1.根据字符串的字典序排序。例如："car" < "carriage" < "cats" < "doggies < "koala"
//2.根据字符串的长度排序。例如："car" < "cats" < "koala" < "doggies" < "carriage"
//考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法，考拉要忙着吃树叶，所以需要你来帮忙验证。

//输入描述 :输入第一行为字符串个数n(n ≤ 100),接下来的n行, 每行一个字符串, 字符串长度均小于100，均由小写字母组成

//输出描述 :
//如果这些字符串是根据字典序排列而不是根据长度排列输出"lexicographically",
//如果根据长度排列而不是字典序排列输出"lengths",
//如果两种方式都符合输出"both"，否则输出"none"

//思路：按长度排列：比较相邻的两个字符串的长度，遍历所有的字符串，若出现前一个字符串比后一个字符串长，则返回false,否则返回true
//按字典序排列：利用compare()比较相邻的两个字符串中的各个字母，若前一个字符串中的字母比后一个字符串中的字母“大”，则返回false,否则返回true

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool lengths(string s,vector<string> vs)
{
	int i = 0;
	while ((i+1) < vs.size())
	{
		if (vs[i].size() >= vs[i + 1].size())
		{
			return false;
		}
		i++;
	}
	return true;
}

bool lexicographically(string s, vector<string> vs)
{
	int i = 0;
	while ((i + 1) < vs.size())
	{
		if (vs[i].compare(vs[i + 1]) >= 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int main1()
{
	string s;
	vector<string> vs;
	int n,i =0;
	cin >> n;

	bool t1,t2;

	while (i<n)
	{
		cin >> s;
		vs.push_back(s);
		i++;
	}
	
	t1 = lengths(s, vs);
	t2 = lexicographically(s, vs);

	if (t1 && !t2)
	{
		cout << "lengths" << endl;
	}
	else if (t2 && !t1)
	{
		cout << "lexicographically" << endl;
	}
	else if (t1 && t2)
	{
		cout << "both" << endl;
	}
	else
	{
		cout << "none" << endl;
	}

	system("pause");
	return 0;
}