#ifndef __LB_STACK_H___
#define __LB_STACK_H___

#include "Linkedlist.h"

typedef int Data;
typedef List Stack;

int top;			//������ ���� �����ϴ� ��������

/* ������ �ʱ�ȭ */
void SInit(Stack *sp);
/* LIFO ������ ���� ���� ���� */
void Spush(Stack **sp, int data);
/* LIFO ������ ���� ���� ���� */
int Spop(Stack **sp);
/* ������ ���� ���� ��� */
void stackPrint(Stack *sp);

#endif // !__LB_STACK_H___
