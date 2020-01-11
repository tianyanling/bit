#include<iostream>
#include<cstdio>
using namespace std;

int primetable[]=
{
				  11,			      23,			       47,				    89,			   179,
	            353,			    709,			   1409,			    2819,		     5639,
	        11273,         22531,		     45061,			  90121,         180233,
	      360457,       720899,		 1441807,		  2883593,       5767169,
	  11534351,   23068673,    46137359,	    92274737,   184549429,
	369098771, 738197549,1476395029, 2952790033, 4294967291
}
bool judgePrime(long long n)
{
	int sn = (int)sqrt(n);

	for (int i = 2; i <= sn; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned long long start = 22;
	unsigned long long i, j;
	int count = 0;
	for (i = start; i < 3E9; i *= 2)
	{
		for (j = i; !judgePrime(j); j++);
		count++;
		if (count % 5 == 0)
		{
			cout << endl;
		}
		printf("%10lld,", j);
	}

	for (i = 0xffffffff; !judgePrime(i); i--);
	cout << i << endl;
	system("pause");
	return 0;
}