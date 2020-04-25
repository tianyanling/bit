#include <iostream>
using namespace std;

int bankCount(string str)
{
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string str = "ncjdks ncjdkss d d d dnsk";
	cout << bankCount(str) << endl;
	system("pause");
	return 0;
}