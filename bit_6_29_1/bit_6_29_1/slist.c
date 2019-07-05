#define _CRT_SECURE_NO_WARNINGS 1

#include"slist.h"

void SListInit(SList* plist)
{
	plist->_head = NULL;
}

void SListPushFront(SList* plist, SLTDataType x)
//ͷ�巨
{
	assert(plist);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;
}

void SListPopFront(SList* plist)
//ͷɾ��
{
	assert(plist);

	SListNode * tmp;
	if (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = tmp->_next;
		free(tmp);
	}
}

void SListPrint(SList* plist)
{//��ӡ
	assert(plist);

	SListNode *cur;
	for (cur = plist->_head; cur; cur = cur->_next)
	{
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}

SListNode* SListFind(SList* plist, SLTDataType x)
{//����һ�������е�Ԫ��pos
	assert(plist);

	SListNode * cur;

	for (cur = plist->_head; cur; cur = cur->_next)
	{
		if (cur->_data == x)
		{
			return cur;
		}
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDataType x)
// ��pos�ĺ�����в���
{
	assert(pos);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;
}

void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src)
// ��pos��ǰ����в��루������ʹ�ã�
{
	assert(plist);

	SListNode * cur;
	SListNode * newdata = (SListNode *)malloc(sizeof(SListNode));

	if (plist->_head->_data == x)
	{
		SListPushFront(plist, src);
		return;
	}

	for (cur = plist->_head; cur->_next; cur = cur->_next)
	{
		if (cur->_next->_data == x)
		{
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur->_next;
	cur->_next = newdata;
}

void SListEraseAfter(SListNode* pos)
//ɾ��pos���һ��Ԫ��
{
	assert(pos);

	SListNode * tmp = pos->_next;

	pos->_next = tmp->_next;
	free(tmp);
}

void SListReverse(SList* plist)
{//��תһ����������һ��
	assert(plist->_head);
#if 0
	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head;
	while (tmp)
	{
		cur->_next = tmp->_next;
		tmp->_next = plist->_head;

		plist->_head = tmp;
		tmp = cur ->_next;
	}
#elif 0
//��������
	SList * reve = (SList *)malloc(sizeof(SListNode));
	SListInit(reve);
	SListNode *cur;
	for (cur = plist->_head; cur; cur = cur->_next)
	{
		SListPushFront(reve, cur->_data);
	}
	SListDestory(plist);
	plist->_head = reve->_head;
#else
	//��������
	SListNode * tmp = plist->_head->_next;		//��¼next
	SListNode * cur = plist->_head;
	cur->_next = NULL;	//��������ͷ��������next�Ͽ�����tmp��¼���������ҵ�
	while (tmp)	//ÿ��ѭ����Ҫ��ɶ�����Ȼ��;�ͷ���³����Ĺ��̣�����������������tmpΪ�գ�����ѭ��
	{
		plist->_head = tmp;	//����ͷ��tmpλ�û��Ϊ�µ�ͷ����ͷ��Ϊ���ĵ�һ���ڵ�
		tmp = tmp->_next;	//��¼�´�ѭ����tmp��λ�ã���Ϊtmp �����ѭ�����Ѿ������ˣ����Զ��Һ������Ͼ�Ҫ����������Ҫ�������¼
		plist->_head->_next = cur;	//���������ͷ�γ�����
		cur = plist->_head;	//��¼��ͷ��λ�ã������´�ѭ������
	}
#endif
}



void SListDestory(SList* plist)
{
	assert(plist);

	SListNode *tmp;
	while (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}



