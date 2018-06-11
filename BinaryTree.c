#include <stdlib.h>
#include <stdio.h>
#include "BinaryTree.h"

/*
	����, ������ �ڽ��� ������ ǥ��
	�����ʹ� ���� �ʱ�ȭ������ �ʴ´�.
*/
void TreeInit(TreeNode * tp)
{
	tp->leftChild = tp->rightChild = NULL;
}

/*
	���ο� Ʈ�����Ҹ� �����.
	����� ���� �ʱ�ȭ ������ ��ġ�� �� ���������͸� ��ȯ.
*/
TreeNode * NewNode(void)
{
	TreeNode *nNode = (TreeNode *)malloc(sizeof(TreeNode));
	TreeInit(nNode);

	return nNode;
}

void MakeLeftSubTree(TreeNode * tp)
{
	if (tp->leftChild != NULL) {	//���� ����Ʈ���� �ִٸ�
		fprintf(stderr, "leftChild already exist !");
		free(tp->leftChild);	//���Ÿ� �Ѵ�.
	}

	tp->leftChild = NewNode();
}

void MakeRightSubTree(TreeNode * tp)
{
	if (tp->rightChild != NULL) {	//������ ����Ʈ���� �ִٸ�
		fprintf(stderr, "leftChild already exist !");
		free(tp->rightChild);	//���Ÿ� �Ѵ�.
	}

	tp->rightChild = NewNode();
}

void DeleteTree(TreeNode *tp) {
	if (tp == NULL) {		//������ Ʈ�����Ұ� ���ٸ�
		fprintf(stderr, "Tree don't exist !");
		exit(EXIT_FAILURE);		//��������
	}

	free(tp);
}

void DeleteLeftSubTree(TreeNode * tp)
{
	DeleteTree(tp->leftChild);
}

void DeleteRightSubTree(TreeNode * tp)
{
	DeleteTree(tp->rightChild);
}

void TreePushData(TreeNode * tp, int data)
{
	if (tp == NULL) {		//�ش� Ʈ���� �������� �ʴ´ٸ�
		fprintf(stderr, "Tree don't exist");
		tp = NewNode();		//���ο� Ʈ�����Ҹ� �����.
	}
	
	tp->data = data;		//������ ����
}

int TreePopData(TreeNode * tp)
{
	int rData;		//�ش� Ʈ���� ������ ��

	if (tp == NULL) {	//Ʈ���� ���ٸ�
		fprintf(stderr, "Tree don't exist");
		exit(EXIT_FAILURE);		//�������Ḧ ��Ų��.
	}
	rData = tp->data;		//Ʈ���� �����ϸ� ���� �����ؼ�
	free(tp);				//�ش� Ʈ�� ���Ҹ� �����ϰ�

	return rData;			//���� ��ȯ.
}