//����
//���ӣ�https://www.nowcoder.com/questionTerminal/e2422543519249f292d8435394ab82fe?orderByHotValue=1&done=0&pos=11&onlyReference=false

//��������ͨ����һ�����ĸ���λ�ϵ����ּ������õ���
//����õ�������һλ������ô�������������������������λ�����߰�������λ�����֣�
//��ô�ٰ���Щ���ּ���������˽�����ȥ��ֱ���õ���һλ��Ϊֹ��
//���磬����24 ��˵����2 ��4 ��ӵõ�6������6 ��һλ�������6 ��24 ��������
//�ٱ���39����3 ��9 �������õ�12������12 ����һλ������˻��ð�1 ��2 ��������
//���õ�3������һ��һλ�������3 ��39 ��������
//���ڸ���һ�����������������������
#include<iostream>
#include<string>
using namespace std;

int numRoot(int n)
{
	int ret = 0;

	if (n < 10)
	{
		return n;
	}
	while (n>0)
	{
		ret += n % 10;
		n = n / 10;
	}

	if (ret > 9)
	{
		ret = numRoot(ret);
	}
	return ret;
}

int main2()
{
	string num;
	int root = 0;
	///32333332442
	while (cin >> num)
	{
		for (auto i = num.begin(); i != num.end(); i++)
		{
			root += (*i - '0');
		}
		//cout << root << endl;

		int sum = numRoot(root);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}