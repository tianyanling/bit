#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//�����ַ���a+b < b+a ˵��a��b��ǰ��
//���Խ���������ת��Ϊ�ַ���������׷�Ӳ�����Ȼ��Ƚ��ĸ���������ǰ��
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