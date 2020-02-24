#include"rsa.h"
#include"bigint.h"
#include<chrono>

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
	Key key = rsa.getallKey();
	cout << "(e,n):" << key.m_ekey << " , " << key.m_pkey << endl;
	cout << "(d,n):" << key.m_dkey << " , " << key.m_pkey << endl;
	rsa.ecrept("test.txt", "test.ecrept.txt");
	rsa.decrept("test.ecrept.txt", "test.decrept.txt");
}

void testBigIntAdd()
{
	BigInt bi;
	long a = 1723647;
	long b = 788398;

	cout << a + b << endl;
	//cout << bi.add("1723647", "788398") << endl;
	BigInt aa = "1723647";
	BigInt bb = "788398";
	cout << aa + bb << endl;
}

void testBigIntSub()
{
	BigInt bi;
	long a = 1723647;
	long b = 788398;

	cout << a - b << endl;
	//cout << bi.sub("1723647", "788398") << endl;
	BigInt aa = "1723647";
	BigInt bb = "788398";
	cout << aa - bb << endl;
}

void testBigIntMul()
{
	BigInt bi;
	long a = 9834;
	long b = 99237;

	cout << a * b << endl;
	//cout << bi.mul("9834", "99237") << endl;
	BigInt aa = "9834";
	BigInt bb = "99237";
	cout << aa * bb << endl;
}

void testBigIntDev()
{
	BigInt bi;
	long a = 99237;
	long b = 9834;

	cout << a / b << endl;
	cout << a % b << endl;
	//cout << bi.dev("99237", "9834").first  << endl;
	//cout << bi.dev("99237", "9834").second << endl;
	BigInt aa = "99237";
	BigInt bb = "9834";
	cout << aa / bb;
	cout << aa%bb << endl;
}

void testBoostBigInt()
{
	boost::multiprecision::cpp_int ci;///¹Ì¶¨Î»
	ci = 1024;
	cout << ci << endl;

	string num = "676374783247383959845784365843758393";
	boost::multiprecision::cpp_int cppInt(num);
	cout << "cppInt: "<<cppInt << endl;
	cout << "cppInt+1: "<<cppInt + 1 << endl;

	boost::multiprecision::int1024_t cpp1024(num);
	cout << "cpp1024: "<<cpp1024 << endl;
	cout << "cpp1024 + 1: "<< cpp1024 + 1 << endl;

	boost::multiprecision::int1024_t cpp1024_2 = boost::multiprecision::int1024_t(1) << 1023;
	cout << "cpp1024<<1023: "<<cpp1024_2 << endl;
}

int main()
{
	//test();
	//testRSA();
	//testBigIntAdd();
	//cout << endl;
	//testBigIntSub();
	//cout << endl;
	//testBigIntMul();
	//cout << endl;
	//testBigIntDev();

	//testBoostBigInt();

	auto start = chrono::steady_clock::now();
		
	testRSA();
	auto end = chrono::steady_clock::now();
	chrono::duration<double, milli> elapsed = end - start;
	cout << "time:" << elapsed.count() << "ms" << endl;
	system("pause");
	return 0;
}