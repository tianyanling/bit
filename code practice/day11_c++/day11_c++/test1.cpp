//vectorʵ��insert
#include<iostream>
#include<vector>
using namespace std;

int main1()
{
#if 0
	//����һ������һ��Ԫ�أ�
	//iterator insert(const_iterator position, const value_type& val)
	//��position������Ԫ��val��position��ԭ�е�Ԫ���±궼��1������ֵΪposition
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4)-v.begin();//ȷ���±�
	cout <<"��Ҫ���ҵ������±�Ϊ��"<< k << endl;

	v.insert(pos, 9);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 0
	//����������������ͬ��Ԫ�أ�
	//iterator insert(const_iterator position, size_type n, const value_type& val)
	//��position������n��Ԫ��val��position��ԭ�е�Ԫ���±궼��n������ֵΪposition
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "��Ҫ���������±�Ϊ��" << k << endl;


	v.insert(pos, 2, 6);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
#endif

#if 1
	//������������һ����Χ�ڵ�����Ԫ�أ�
	// iterator insert (const_iterator position, InputIterator first, InputIterator last)
	//��position������[first��last)���Ԫ�أ�first��last����ͬһ��vector�У�����ֵΪposition
	int a[] = { 1,2,3,4,5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	int b[] = { 7,8,9,10,11 };
	vector<int> bv(b, b + sizeof(b) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	int k = find(v.begin(), v.end(), 4) - v.begin();
	cout << "��Ҫ���������±�Ϊ��" << k << endl;

	v.insert(pos, bv.begin()+2, bv.end());
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