#include"seqlist.h"

int main()
{
	SeqList<int> s1;
	s1.pushback(6);
	s1.pushback(2);
	s1.popback();
	cout << s1.size() << endl;

	system("pause");
	return 0;
}