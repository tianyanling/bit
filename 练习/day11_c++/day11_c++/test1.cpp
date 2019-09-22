//vector实现insert
#include<iostream>
#include<vector>
using namespace std;

int main1()
{
#if 0
	//方法一（插入一个元素）
	//iterator insert(const_iterator position, const value_type& val)
	//在position处插入元素val，position后原有的元素下标都加1，返回值为position
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4)-v.begin();//确定下标
	cout <<"所要查找的数字下标为："<< k << endl;

	v.insert(pos, 9);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 0
	//方法二（插入多个相同的元素）
	//iterator insert(const_iterator position, size_type n, const value_type& val)
	//在position处插入n个元素val，position后原有的元素下标都加n，返回值为position
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "所要查找数字下标为：" << k << endl;


	v.insert(pos, 2, 6);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 1
	//方法三（插入一个范围内的所有元素）
	// iterator insert (const_iterator position, InputIterator first, InputIterator last)
	//在position处插入[first，last)间的元素，first和last需在同一个vector中，返回值为position
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	int b[] = { 7,8,9,10,11 };
	vector<int> bv(b, b + sizeof(b) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "所要查找数字下标为：" << k << endl;

	v.insert(pos, bv.begin()+2, bv.end());
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