#include"rsa.h"
#include<iostream>
using namespace std;

void test()
{
	RSA rsa;
	rsa.getKeys();
	Key key = rsa.getallKey();

	DataType original = 3;
	DataType decout = rsa.ecrept(original, key.m_ekey, key.m_pkey);
	cout << "original: " << original << endl;
	cout << "ecrept: " << decout << endl;
	cout << "decrpet: " << rsa.decrept(original, key.m_dkey, key.m_pkey) << endl;
}

void testRSA()
{
	RSA rsa;

	rsa.ecrept("test.txt", "test.ecrept.txt");
	rsa.decrept("test.ecrept.txt", "test.decrept.txt");
}
int main()
{
	//test();
	testRSA();
	system("pause");
	return 0;
}