//��������˳��ʹ����λ��ż��ǰ��
//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
#include<iostream>
#include<vector>
using namespace std;

void reOrderArray(vector<int> &array)
{
	int num = array.size();
	for (int i = 0; i<num; i++)//�ҵ���һ��ż��λ��
	{
		int temp;
		if ((array[i] % 2) == 0)//ż��
		{
			for (int j = i; j < num; j++)
			{
				if ((array[j] % 2) == 1)//�ҵ�ż�����һ������λ�ã��ӵ�һ��ż��λ��ʼ����
				{
					temp = array[j];
					while (j > i)
					{
						array[j] = array[j - 1];//����һ��ż��λ��ʼ����
						j--;
					}
					array[j] = temp;//��������ǰ�Ƶ���һ��ż��λ
					i++;//��һ��ż��λ�ú���һ��
				}
			}
			break;
		}
	}
}

int main()
{
	vector<int> array = { 1,2,3,4,5,6,7,3,4,5,3,5,6,24,4 };

	reOrderArray(array);
	system("pause");
	return 0;
}