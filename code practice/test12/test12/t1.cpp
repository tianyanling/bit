//�����ƵĲ���

//��Ŀ������������32λ����n��m�����д�㷨��m�Ķ�������λ���뵽n�Ķ����Ƶĵ�j����iλ,
//���ж����Ƶ�λ���ӵ�λ������λ����0��ʼ��
//����������int n��int m��ͬʱ����int j��int i����������������
//�뷵�ز������������֤n�ĵ�j����iλ��Ϊ�㣬��m�Ķ�����λ��С�ڵ���i - j + 1��

//˼·��Ҫ��m���뵽n�еĵ�jλ����iλ�����m������ j λ������n ��λ�򣬼��ɵõ��µĶ�������
#include<iostream>
using namespace std;

int binInsert(int n, int m, int j, int i)
{
	m <<= j;
	return n | m;
}

int main()
{
	int n, m, i, j;
	cin >> n >> m >> i >> j;

	cout << binInsert(n, m, i, j) << endl;
	system("pause");
	return 0;
}