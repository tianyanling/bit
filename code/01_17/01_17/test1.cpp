#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) 
{

	reverse(s.begin(), s.end());
	find(s.begin(), s.end(), ' ');

}

int main()
{

	system("pause");
	return 0;
}