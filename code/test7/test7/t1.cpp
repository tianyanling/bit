//쳲���������
//����һ���������㾭�����ٲ����Խ�������任Ϊ쳲���������ÿ�α任ֻ��ͨ��X+1��X-1
#include<iostream>
#include<algorithm>
using namespace std;

int main1()
{
	int N;
	cin >> N;

	int tmp;
	int a = 0, b = 1;
	while (N > b)
	{
		tmp = a;
		a = b;//a�൱��Fib[i],b�൱��Fib[i+1]
		b += tmp;
	}

	cout << min((N - a), (b - N));
	cout << endl;
	system("pause");
	return 0;
}