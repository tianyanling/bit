#include"date.h"
#include<cstdlib>

int _main()
{
	/*Date *pd = new Date[3]{ Date(1999,12,20 ), Date(2000, 12, 20), Date(2000, 12, 20)};

	cout << pd[0] << endl;
	cout << pd[2] << endl;

	delete[] pd;*/

	char *pa = (char *)malloc(1024);
	size_t size = 0;

	Date *pd =  new(pa + size)Date(2015, 2, 22);

	size += sizeof(Date);

	Date *pd2 = new(pa + size)Date(2015, 2, 22);

	cout << (void *)pa << endl << pd << endl << pd2;
	system("pause");
	return 0;
}

class HeapOnly
{
	int m_a;

	HeapOnly() :
		m_a(0)
	{
	}

public:
	static HeapOnly * createObject();
};

HeapOnly * HeapOnly::createObject()
{
	HeapOnly *ho = new HeapOnly;
	return ho;
}

int main()
{
	Date a(1, 2, 3);
	system("pause");
	return 0;
}