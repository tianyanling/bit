//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//int money = 20;
//	int money = 0;
//	printf("��������Ǯ����");
//	scanf("%d",&money);
//	//int total=20;
//	//int empty = 20;
//	int total = money;			//����ˮ��ƿ��
//	int empty = money;		//��ƿ����
//	while (empty >=2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n",total);
//	system("pause");
//	return 0;
//}


int main()
{
	int m, n;
	printf("��������ˮƿˮ�Ͷһ���ˮ����Ҫ�Ŀ�ƿ��");
	scanf("%d%d", &m,&n);
	int total = m;		//����ˮ��ƿ��
	int empty = m;		//��ƿ����
	while (empty >=n)
	{
		total = total + empty / n;		
		empty = empty / n + empty % n;
	}
	printf("%d\n", total);
	system("pause");
	return 0;
}