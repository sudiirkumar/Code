#include<stdio.h>
#include <stdlib.h>
//Queue implementations
typedef struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;
TreeNode* createTreeNode(int data){
	TreeNode* new_node = (TreeNode*)malloc(sizeof(TreeNode));
	new_node->data = data;
	new_node->left = new_node->right = NULL;
}
typedef struct ListNode{
	TreeNode* node;
	ListNode* next;
}ListNode;
ListNode* createListNode(TreeNode* node){
	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	new_node->node = node;
	new_node->next = NULL;
}
typedef struct Queue{
	ListNode* head;
	ListNode* tail;
	int curr_size;
}Queue;
Queue* createQueue(){
	Queue* new_queue = (Queue*)malloc(sizeof(Queue));
	new_queue->head = new_queue->tail = NULL;
	new_queue->curr_size = 0;
}
int empty(Queue *q){
	return q->head==NULL;
}
void push(Queue *q, TreeNode* node){
	ListNode* new_node = createListNode(node);
	if(empty(q)){
		q->head = q->tail = new_node;
		return;
	}
	q->tail->next = new_node;
	q->tail = new_node;
	(q->curr_size)++;
}
void pop(Queue* q){
	if(!empty(q)){
		ListNode *temp = q->head;
        q->head = q->head->next;
        temp->next = NULL;
        free(temp);
        q->curr_size--;
	}
}
TreeNode* front(Queue *q){
	if(!empty(q))
		return q->head->node;
}
int size(Queue *q){
	return q->curr_size;
}
//Binary tree implementation

TreeNode* buildPreOrder(){
	int data;
	scanf("%d",&data);
	if(data==-1){
		return NULL;
	}
	TreeNode* new_node = createTreeNode(data);
	new_node->left = buildPreOrder();
	new_node->right = buildPreOrder();
	return new_node;
}
void preOrder(TreeNode* root){
	if(root==NULL){
		printf("N ");
		return;
	}
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(TreeNode *root){
    if(root==NULL){
        printf("N ");
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}
void inOrder(TreeNode *root){
    if(root==NULL){
        printf("N ");
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}
void levelOrder(TreeNode *root){
    Queue *q = createQueue();
    push(q,root);
    push(q,NULL);
    while(!empty(q)){
        TreeNode *temp = front(q);
        if(temp==NULL){
            printf("\n");
            pop(q);
            if(!empty(q))
                push(q,NULL);
        }
        else{
            if(temp->left!=NULL){
                push(q,temp->left);
            }
            if(temp->right!=NULL){
                push(q,temp->right);
            }
            printf("%d ",temp->data);
            pop(q);
        }
    }
}