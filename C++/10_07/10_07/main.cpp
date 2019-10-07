#include<iostream>
#include<list>
using namespace std;

int main1()
{
	list<int> l1;
	list<int> l2(4, 6);
	list<int> l3 = l2;

	int arr[5] = { 1,3,5,7,9 };
	list<int> l4(arr, arr + 5);
	list<int> l5(l4.begin(), l4.end());

	list<int>::iterator pos = l5.end();
	pos--;

	//l5.insert(pos, 5);
	//l5.insert(pos, 4, 5);
	//l5.insert(pos, l2.begin(), l2.end());

	//l5.erase(pos);

	list<int>::iterator pos2 = --pos;
	pos++;
	pos2--;

	//cout << *pos << " " << *pos2 << endl;
	l5.erase(pos2, pos);//ɾ��begin()����ɾ��end()
	//erase���µ�����ʧЧ����,�ý��ɾ�������ټ���ʹ�ã���ӡ��
	//insert���ᵼ�µ�����ʧЧ����vector������
	//cout << *pos2 << endl;

	//����������������������
	//l5.swap(l2);

	for (auto &i : l5)
	{
		cout << i << " ";
	}

	/*list<int>::reverse_iterator ril;

	for (ril = l5.rbegin(); ril != l5.rend(); ril++)
	{
		cout << *ril << " ";
	}
	
	
	
	cout << l5.back() << endl;
	cout << l5.front() << endl;
	*/
	cout << endl;
	system("pause");
	return 0;
}

int main2()
{
	list<int> l1;
	list<int> l2(4, 6);
	list<int> l3 = l2;

	int arr[5] = { 5,2,3,1,4 };
	list<int> l4(arr, arr + 5);
	list<int> l5(l4.begin(), l4.end());

	l5.sort();

	for (auto &i : l5)
	{
		cout << i << " ";
	}
	cout<<endl;

	system("pause");
	return 0;
}

int main3()
{
	int arr[5] = { 1,3,5,7,9};
	list<int> l4(arr, arr + 5);
	list<int> l5(l4.begin(), l4.end());

	int arr2[5] = { 2,4,6,8,10 };
	list<int> l6(arr2, arr2 + 5);

	list<int> l7 = l6;

	//�ϲ���ʹl6��ʧ
	l5.merge(l6);//�ںϲ���l6Ϊ��,��Ҫ����l6�е����ݣ���Ҫ�ȿ�����l7��

	for (auto &i : l5)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}