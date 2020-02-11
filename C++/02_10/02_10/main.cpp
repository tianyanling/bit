#include<iostream>
#include<vector>
using namespace std;

template<class T>
T swap(const T& left, const T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}

int swap( int left, int right)
{
	int tmp;
	tmp = left;
	left = right;
	right = tmp;
}

int main()
{
	//int a1 = 2, a2 = 4;
	//double b1 = 3.0, b2 = 6.0;

	//swap(2, 4);
	//swap<double>(2,4);

	vector<int> v1;
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<double> v2;
	v2.push_back(1.0);
	v2.push_back(2.0);
	v2.push_back(3.0);


	system("pause");
	return 0;
}