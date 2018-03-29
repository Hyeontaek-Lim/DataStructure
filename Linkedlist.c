#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.h"

/* list�� �ʱ�ȭ */
void listInit(List ** plist)
{
	(*plist)->next = NULL;
}

/* list�� ���� ���ʿ��� ������ ������ */
void Insert(List ** head, int data)
{
	List *newNode = (List *)malloc(sizeof(List)); //���ο� ��� ����
	List *temp = *head;		//�ӽó�� ����. ���� Ž���� ����

	if (temp->data < 0) {	// ó�� ����Ʈ�� ���� ������ ��
		temp->data = data;
		
		newNode->next = NULL;
		temp->next = newNode;
	}
	else {			// ó�� ���� ����Ʈ�� ���� ������ ��
		newNode->next = NULL;		//���ο� ����� ���� ���� ����x
		
		while (temp->next != NULL) {	// ���ڸ��� ã�´�.
			temp = temp->next;
		}
		temp->data = data;		// �����Ϳ� ���� ��带 ����
		temp->next = newNode;
	}
}

void Delete(List ** head, int data)
{
	List *temp = *head;			//�ӽó��
	List *prev = NULL;			//���� ���

	/* ù��° ��� ���� �� */
	if (temp != NULL && temp->data == data) { 
		(*head) = (*head)->next;	//��Ʈ�� �� ���� ���� ����
		free(temp);					//ó�� ��Ʈ��� ����

		return;
	}

	/* �ش� �������� ��ġ�� ã�´�. */
	while (temp != NULL && temp->data != data) {
		prev = temp;
		temp = temp->next;
	}

	/* ������ ã�Ƶ� ���ٸ� */
	if (temp == NULL)
		return;

	/* 1. ���� �Ϸ��� ����� ���� ����� ���� ��带 �����Ϸ��� ����� ���� ���� ���� */
	prev->next = temp->next;
	free(temp);

	return;
}

void print(List * head)
{
	while (head->next != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
