#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//对于字符串a+b < b+a 说明a在b的前面
//可以将两个整数转化为字符串，进行追加操作，然后比较哪个数字排在前面
static bool cmp(int a, int b) 
{
	string A = "";
	string B = "";
	A += to_string(a);
	A += to_string(b);
	B += to_string(b);
	B += to_string(a);

	return A<B;
}

string PrintMinNumber(vector<int> numbers)
{
	string tmp;
	sort(numbers.begin(), numbers.end(),cmp);
	for (int i = 0; i < numbers.size(); i++)
	{
		tmp += to_string(numbers[i]);
	}
	return tmp;
}

int main()
{
	vector<int> numbers{ 1,2,3,4,5 };
	cout << PrintMinNumber(numbers) << endl;
	system("pause");
	return 0;
}