//vectorʵ��erase
#include<iostream>
#include<vector>
using namespace std;

int main2()
{
#if 0
	//����һ��ɾ��һ��Ԫ�أ�
	//iterator erase(iterator __position);
	//ɾ��position����һ���ַ�����Ĭ��ֵ����������ֵ����Ϊstring�ĵ�������ֵΪ�޸ĺ��ַ�������position
	int a[] = { 1,2,3,4,5,6,7 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "��Ҫɾ��Ԫ�ص��±�Ϊ��" << k << endl;

	v.erase(pos);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 0
	//��������ɾ��һ����Χ�ڵ�����Ԫ�أ�
	//iterator erase ( iterator __first, iterator __last );
	//ɾ��[first,last)����ַ�����Ĭ��ֵ����������ֵ����Ϊstring�ĵ�������ֵΪ�޸ĺ��ַ�������first
	int a[] = { 1,2,3,4,5,6,7 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	v.erase(v.begin() + 2, v.end() - 3);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

	system("pause");
	return 0;
}