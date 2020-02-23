#include"rsa.h"
#include"bigint.h"
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

void testBigIntAdd()
{
	BigInt bi;
	long a = 1723647;
	long b = 788398;

	cout << a + b << endl;
	cout << bi.add("1723647", "788398") << endl;
}

void testBigIntSub()
{
	BigInt bi;
	long a = 1723647;
	long b = 788398;

	cout << a - b << endl;
	cout << bi.sub("1723647", "788398") << endl;
}

void testBigIntMul()
{
	BigInt bi;
	long a = 9834;
	long b = 99237;

	cout << a * b << endl;
	cout << bi.mul("9834", "99237") << endl;
}
int main()
{
	//test();
	//testRSA();
	//testBigIntAdd();
	//testBigIntSub();
	testBigIntMul();
	system("pause");
	return 0;
}