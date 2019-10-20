//非类型函数模板
#include<iostream>
using namespace std;

template<class T, size_t N = 10>
class Array
{
	T m_data[N];
public:
	Array()
	{
		cout << N <<endl;
	}
};

int main1()
{
	const int i = 100;
	Array<int, i> a;

	system("pause");
	return 0;
}

