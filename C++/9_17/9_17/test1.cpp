#include<iostream>
#include<vector>
using namespace std;

int main()
{
#if 0
//capacity
	size_t sz;
	std::vector<int> foo;
	sz = foo.capacity();
	std::cout << "making foo grow:\n";
	for (int i = 0; i<100; ++i) 
	{
		foo.push_back(i);
		if (sz != foo.capacity()) 
		{
			sz = foo.capacity();
			std::cout << "capacity changed: " << sz << endl;
		}
	}
	cout << endl << endl;

	//revserve
	std::vector<int> bar;
	sz = bar.capacity();
	bar.reserve(100); // this is the only difference with foo above
	std::cout << "making bar grow:\n";
	for (int i = 0; i<100; ++i)
	{
		bar.push_back(i);
		if (sz != bar.capacity()) 
		{
			sz = bar.capacity();
			std::cout << "capacity changed: " << sz << endl;
		}
	}

#endif

#if 0
	//resize
	std::vector<int> myvector;
	// set some initial content:
	for (int i = 1; i < 10; i++)
	{
		myvector.push_back(i);
	}

	myvector.resize(5);
	myvector.resize(8, 100);
	myvector.resize(12);

	std::cout << "myvector contains:";
	for (int i = 0; i < myvector.size(); i++)
	{
		std::cout << ' ' << myvector[i];
	}
	std::cout << '\n';
#endif

#if 0
	//push_back/pop_back
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
	cout << *it << " ";
		++it;
	}
	cout << endl;

	v.push_back(6);
	v.push_back(7);
	it = v.begin();
	while(it != v.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	v.pop_back();
	v.pop_back();
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif
	
#if 1
	//find/insert/erase
	int a[] = { 1, 2, 3, 4,2,3,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	// 使用find查找3所在位置的iterator
	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	cout << *pos << endl;

	// 在pos位置之前插入30
	v.insert(pos, 30);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	pos = find(v.begin(), v.end(), 3);
	// 删除pos位置的数据
	v.erase(pos);
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 0

#endif
	system("pause");
	return 0;
}