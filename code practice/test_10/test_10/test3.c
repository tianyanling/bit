//���ַ������ҳ���һ��ֻ����һ�ε��ַ���������"abaccdeff",�����'b'��Ҫ��ʱ�临�Ӷ�ΪO(n).
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Find(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}
			if (j == len - 1)
			{
				printf("%c ", arr[i]);
				return;
			}
		}
	}
}

int main()
{
	char arr[] = "abaccdeff";
	int len = sizeof(arr) / sizeof(arr[0]);
	Find(arr, len);
	system("pause");
	return 0;
}