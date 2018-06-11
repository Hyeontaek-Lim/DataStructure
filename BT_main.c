#include <stdio.h>
#include "BinaryTree.h"

int main(void) {
	TreeNode *head = NewNode();
	TreeNode *travel = head;	// �ش� ��ġ�� ����ų Ʈ��������.
	TreeNode *presentNode = NULL;

	int i;


	/* ���� ����Ʈ���� 5�� �߰��Ѵ�.
		��
	   /  \
	  ��   ��
     /  \
    ��   ��
    .......
	*/
	for (i = 0; i < 5; i++) {
		MakeLeftSubTree(travel);
		MakeRightSubTree(travel);

		travel = travel->leftChild;
	}

	MakeLeftSubTree(travel);
	DeleteLeftSubTree(travel);

	return 0;
}