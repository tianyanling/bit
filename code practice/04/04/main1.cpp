//vector
#include<iostream>
#include<vector>
using namespace std;

int main1()
{
	vector<int> v;

	for (int i = 1; i < 10; i++)
	{
		v.push_back(i);
	}

	//insert
#if 0
	v.insert(v.begin() + 5, 20);//����һ��Ԫ��
#elif 0
	v.insert(v.begin() + 5, 5, 20);//����n����ͬ��Ԫ��
#else 
	//v.insert(v.begin() + 5, v.begin(), v.end());//����һ�η�Χ��Ԫ��

	//int a[5] = { 20,30,40,50,60 };
	//v.insert(v.begin() + 5, a + 1, a + 3);//����ķ�Χ������ҿ��������Ԫ��Ϊ30,40
#endif

	//erase
#if 0
	v.erase(v.begin() + 5);//ɾ����λ�õ�Ԫ��
#elif 0
	v.erase(v.begin() + 5, v.end() - 3);//ɾ����η�Χ֮���Ԫ��
#endif

#if 0

	vector<int> v2;

	for (int i = 0; i < 5; i++)
	{
		v2.push_back(i);
	}

	v.swap(v2);//swap������������vector�����ݿռ䣨���е�����ȫ��������
#endif
	vector<int>::iterator iv = v.begin() + 5;

	/*cout << *iv << endl;
	v.insert(iv, 50);*/
	cout << *iv << endl;

	iv = v.erase(iv);
	cout << *iv << endl;//erase���µ�����ʧЧ����
	//����취������ֵ

	for (auto &i : v)
	{
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}