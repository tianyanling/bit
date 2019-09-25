#include"string.h"

int main()
{
	String s1(4, 'n');
	String s2("bite");
	String s3 = s2;
	String s4("qioabiluo");

	//cout << s1 << endl
	//cout << s4.size() << endl;
	//cout << s4.capacity() << endl;
	//s4.resize(16, '6');
	//cout << s4.size() << endl;
	//cout << s4.capacity() << endl;

	cout << (s4 > s2) << endl;
	cout << (s4 < "666") << endl;
	cout << ("666" == s1) << endl;
	system("pause");
	return 0;
}