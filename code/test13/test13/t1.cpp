//��������
//https://www.nowcoder.com/questionTerminal/668603dc307e4ef4bb07bcd0615ea677?orderByHotValue=0&done=0&pos=40&onlyReference=false
//��������:
//1.�����ָ���Ϊ�ո�
//2.�����á������������Ĳ���������м��пո񣬲��ܽ���Ϊ�������������������������xcopy / s ��C : \program files�� ��d : \��ʱ��������Ȼ��4������3������Ӧ�����ַ���C : \program files��������C : \program��ע���������ʱ����Ҫ������ȥ�������Ų�����Ƕ�������
//3.����������

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main1()
{
	string str;
	vector<string> vs;
	int flag = 0;//flag=0��ʾû�е�����һ�����ţ�flag=1��ʾ���ŵ�������
	int pos = -1;//��һ���ո��λ��
	int count = 0;//���ŵĸ���

	while (getline(cin,str))
	{
		str += ' ';//���ַ���ĩβ׷��һ���ո񣬷��㴦��
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ' && !flag)//�ڸ�����ǰû�����������Ե�
			{
				vs.push_back(str.substr(pos + 1, i - pos-1));
				pos = i;
			}
			if (str[i] == '"')
			{
				if (count % 2 == 0)
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
				count++;
			}
		}

		cout << vs.size() << endl;
		for (unsigned i = 0; i < vs.size(); i++)
		{
			if (vs[i][0] == '"')
			{
				vs[i] = vs[i].substr(1, vs[i].size() - 2);//ȥ������
				
			}
			cout << vs[i] << endl;
		}
	}

	system("pause");
	return 0;
}