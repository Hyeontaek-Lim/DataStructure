#include <stdio.h>
#include <stdlib.h>
#include "ListBasedStack.h"

void SInit(Stack * sp)
{
	sp->next = NULL;
	top = 0;
}

void Spush(Stack ** sp, int data)
{
	Stack *temp = (*sp);
	Stack *newStack = NULL;

	if (top == 0) {				//���ÿ� ó�� ����Ǵ� ���
		temp->data = data;
		top++;

		return;
	}
	else {				// ���ÿ� ������ ����� ���
		newStack = (Stack *)malloc(sizeof(Stack));

		while (temp->next != NULL) {		//�������� �ش� ������ġ�� ã��
			temp = temp->next;
		}
		newStack->data = data;				//���� �̾��ش�.
		newStack->next = NULL;
		temp->next = newStack;

		top++;				// ������ �߰� ��

		return;
	}
}

int Spop(Stack ** sp)
{
	int rData;			// Pop�� ���� ��� ���� �����͸� ��ȯ�Ѵ�.
	Stack *temp = (*sp); 
	Stack *prev = NULL;

	if (top == 0) {			//���ÿ� �ƹ��͵� ���� ���
		fprintf(stderr, "Stack is empty");
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL) {		//LIFO ������ �°� ������ ���� ��ġ�� ã��.
		prev = temp;
		temp = temp->next;
	}
	rData = temp->data;
	prev->next = NULL;
	free(temp);				//�޸� ���� ���ְ�

	top--;		//���� �ϳ� �ٿ��ְ�

	return rData;		//�ش� ������ ��ȯ.
}

void stackPrint(Stack * sp)
{
	printf("numOfStack : %d \n", top);
	printf("Stack List : ");
	while (sp != NULL) {		//������ ������ �����ͱ��� ���
		printf("%d ", sp->data);
		sp = sp->next;
	}
	printf("\n\n");
}
