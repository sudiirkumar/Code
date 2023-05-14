#include"BinaryTree.h"
int main(){
	TreeNode *root = buildPreOrder();
	levelOrder(root);
	return 0;
}