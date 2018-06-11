/*
	File name : simple Binary tree
	author : Hyuntaek Lim

	-----ADT-----
	�� Ʈ���� �����ڽİ� ������ �ڽ��� 0~1���� ������ �ִ�.
	NULL�������� ���ҵ� ������ ���� �����Ѵ�.
	�ش� ������ ������ ����Ʈ�� ������ �����̹Ƿ�, �߰����� ���Ҹ� �����ϰų�,
	�߰����� ���Ҹ� �����ϴ� ���� ������ ��ü �Ű澲�� �ʾҴ�.
	��� ������ ������ �ܸ����(�ڽ��� ���� ���)������ �����Ѵ�. 
*/

#ifndef __BINARYTREE_H___
#define __BINARYTREE_H___

#define TRUE	1
#define FALSE	0

typedef struct _node {
	struct _node *leftChild;
	struct _node *rightChild;
	int data;
}TreeNode;

/*���ο� Ʈ�� ��ü�� �����.*/
TreeNode* NewNode(void);
/*���� Ʈ���� ���� �ڽ�Ʈ���� �����.*/
void MakeLeftSubTree(TreeNode *tp);
/*���� Ʈ���� ������ �ڽ�Ʈ���� �����.*/
void MakeRightSubTree(TreeNode *tp);
/*���� Ʈ���� ���� �ڽ�Ʈ���� �����Ѵ�.*/
void DeleteLeftSubTree(TreeNode *tp);
/*���� Ʈ���� ������ �ڽ�Ʈ���� �����Ѵ�.*/
void DeleteRightSubTree(TreeNode *tp);
/*�ش� Ʈ���� �����͸� �ִ´�.*/
void TreePushData(TreeNode *tp, int data);
/*�ش� Ʈ���� �����͸� �����ϰ� �� ���� ��ȯ�Ѵ�.*/
int TreePopData(TreeNode *tp);

#endif // !__BINARYTREE_H___
