//vector实现erase
#include<iostream>
#include<vector>
using namespace std;

int main2()
{
#if 0
	//方法一（删除一个元素）
	//iterator erase(iterator __position);
	//删除position处的一个字符，无默认值，函数返回值类型为string的迭代器，值为修改后字符串处的position
	int a[] = { 1,2,3,4,5,6,7 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "所要删除元素的下标为：" << k << endl;

	v.erase(pos);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 0
	//方法二（删除一个范围内的所有元素）
	//iterator erase ( iterator __first, iterator __last );
	//删除[first,last)间的字符，无默认值，函数返回值类型为string的迭代器，值为修改后字符串处的first
	int a[] = { 1,2,3,4,5,6,7 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	v.erase(v.begin() + 2, v.end() - 3);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

	system("pause");
	return 0;
}