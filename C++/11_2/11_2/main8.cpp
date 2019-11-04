//É¾³ýÆ÷
#include<iostream>
#include<memory>
using namespace std;

template<class T>
struct FreeFunc 
{
	void operator()(T* ptr) //()ÖØÔØ
	{
		cout << "FreeFunc:" << ptr << endl;
		free(ptr);
	}
};

template<class T>
struct DeleteFunc
{
	void operator()(T* ptr)
	{
		cout << "DeleteFunc" << ptr << endl;
		delete[] ptr;
	}
};

template<class T>
struct ArrayFunc
{
	void operator()(T* ptr)
	{
		cout << "ArrayFunc" << ptr << endl;
	}
};

int main()
{
	FreeFunc<int> freefunc;
	shared_ptr<int> sp1((int*)malloc(sizeof(int)), freefunc);

	DeleteFunc<int> deletefunc;
	shared_ptr<int> sp2(new int, deletefunc);

	ArrayFunc<int> arrayfunc;
	int arr[5];
	shared_ptr<int> sp3(arr, arrayfunc);

	system("pause");
	return 0;
}