#ifndef __DEQUE_H___
#define __DEQUE_H___

#include "DoublyLinkedlist.h"

typedef List Node;

typedef struct _deque {
	Node *head;
	Node *tail;
	int data;
} Deque;

void DequeInit(Deque *pdeq);

int DQIsEmpty(Deque *pdeq);

/* ���� �Ӹ��� �����͸� �����Ѵ�. */
void DQAddFirst(Deque *pdeq, int data);

/* ���� ������ �����͸� �����Ѵ�. */
void DQAddLast(Deque *pdeq, int data);

/* ���� �Ӹ��� ��ġ�� �����͸� ��ȯ �� �Ҹ� */
int DQRemoveFirst(Deque *pdeq);

/* ���� ������ ��ġ�� �����͸� ��ȯ �� �Ҹ� */
int DQRemoveLast(Deque *pdeq);

/* ���� �Ӹ��� ��ġ�� �����͸� �Ҹ����� �ʰ� ��ȯ */
int DQGetFirst(Deque *pdeq);

/* ���� ������ ��ġ�� �����͸� �Ҹ����� �ʰ� ��ȯ */
int DQGetLast(Deque *pdeq);


#endif // !__DEQUE_H___
