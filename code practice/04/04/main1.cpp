//vector
#include<iostream>
#include<vector>
using namespace std;

int main1()
{
	vector<int> v;

	for (int i = 1; i < 10; i++)
	{
		v.push_back(i);
	}

	//insert
#if 0
	v.insert(v.begin() + 5, 20);//插入一个元素
#elif 0
	v.insert(v.begin() + 5, 5, 20);//插入n个相同的元素
#else 
	//v.insert(v.begin() + 5, v.begin(), v.end());//插入一段范围的元素

	//int a[5] = { 20,30,40,50,60 };
	//v.insert(v.begin() + 5, a + 1, a + 3);//插入的范围是左闭右开，插入的元素为30,40
#endif

	//erase
#if 0
	v.erase(v.begin() + 5);//删除该位置的元素
#elif 0
	v.erase(v.begin() + 5, v.end() - 3);//删除这段范围之间的元素
#endif

#if 0

	vector<int> v2;

	for (int i = 0; i < 5; i++)
	{
		v2.push_back(i);
	}

	v.swap(v2);//swap函数交换两个vector的数据空间（其中的内容全部交换）
#endif
	vector<int>::iterator iv = v.begin() + 5;

	/*cout << *iv << endl;
	v.insert(iv, 50);*/
	cout << *iv << endl;

	iv = v.erase(iv);
	cout << *iv << endl;//erase导致迭代器失效问题
	//解决办法：返回值

	for (auto &i : v)
	{
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}