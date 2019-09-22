#include"highAcc.h"

int main()
{
	string s1("0");
	string s2("98765");

	HighAcc num1(s1);
	HighAcc num2(s2);

	cout << (string(num1 * num2)) << endl;
	system("pause");
	return 0;
}