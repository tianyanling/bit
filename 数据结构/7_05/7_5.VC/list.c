#define _CRT_SECURE_NO_WARNINGS 1
//˫������
#include"list.h"

void ListInit(List* plist)
//��ʼ��
{
	plist->_head = (ListNode *)malloc(sizeof(ListNode));
	memset(&plist->_head->_data, 0, sizeof(LTDataType));//��������
	plist->_head->_next = plist->_head->_prev = plist->_head;//��һ������һ����û�У��ʶ�ָ���Լ�����Ϊ��ʼ��
}

void ListPushFront(List* plist, LTDataType x)
//ͷ�壬�൱�ڵ�����ĺ��
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	cur->_next = plist->_head->_next;//ͷ������һ��ָ��������²�����Ǹ��ڵ����һ��ָ���򣬴�ʱͷ�����֮ǰδ��������Ǹ�����Ѿ��Ͽ�
	plist->_head->_next = cur;//��ʱͷ������һ��ָ���ָ���²������������
	cur->_prev = plist->_head;//�²���Ľ���ǰһ��ָ���ָ����ͷ���
	if (plist->_head->_prev == plist->_head)//���ͷ����ǰһ��ָ������ͷ����Լ�����ôͷ��������Ǹ�������ͷ����ǰһ��ָ����
		//���ͷ����ǰһ��ָ������ͷ����Լ�����ô��ͷ�������㣬ͷ����ǰһ��ָ����Ҳ���ᷢ���仯
	{
		plist->_head->_prev = cur;
	}
}

void ListPushBack(List* plist, LTDataType x)
//���
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_prev->_next = cur;//ͷ����ǰһ����㣨��δ�����½��ʱ������һ��ָ����ָ���²���Ľ��
	cur->_prev = plist->_head->_prev;//��ͷ����ǰһ��ָ��ָ��Ľ�����²������ǰһ��ָ��ָ��Ľ��
	plist->_head->_prev = cur;//��ʱͷ����ǰһ��ָ��ָ��Ľ��Ϊ�²���Ľ��
	cur->_next = plist->_head;//��ʱ�²���Ľ�����һ��ָ��ָ��ͷ���

}

void ListPopFront(List* plist)
//ͷɾ����ɾ��head�ĺ�һ�����
{
	ListNode *tmp = plist->_head->_next;//tmp��ΪҪɾ���Ľ��

	if (tmp !=plist->_head)//������ֻ��һ��ͷ���ʱ�������д˲���
	{
		tmp->_prev->_next = tmp->_next;//����head�ĺ�һ��ָ��ָ�����tmp������tmpɾ���󣬼�ָ��tmp����һ�����
		tmp->_next->_prev = tmp->_prev;//tmp����һ������ǰһ��ָ�뱾��ָ��tmp������tmpɾ���󣬼�ָ��tmp��ǰһ�����
		free(tmp);
	}
}

void ListPopBack(List* plist)
//��ɾ����ɾ��head��ǰһ�����
{
	ListNode *tmp = plist->_head->_prev;
	if (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
	}
}

void ListPrint(List* plist)
{
	ListNode *cur;
	printf("head<-->");
	for (cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)//��ͷ˫��ѭ������ı����ṹ
	{
		printf("%d<-->", cur->_data);
	}
	printf("head\n");
}
void ListDestory(List* plist)
{
	ListNode *tmp = plist->_head->_prev;
	while(tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
		tmp = plist->_head->_prev;
	}
	free(plist->_head);
	plist->_head = NULL;
}