#include<iostream>
#include<Ctime>
using namespace std;

/*2��ʹ�÷�Χfor��ͨ������Ϊһ�����鸳ֵ */
int main1()
{
	int arr[10] = { 0 };
	srand((unsigned)time(NULL));
	int i=0;
	for (auto i : arr)
	{
		arr[i] = rand()%10+1;
		cout <<arr[i] <<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}