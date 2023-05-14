#include <stdlib.h>
typedef struct ListNode{
	int data;
	ListNode* next;
}ListNode;
ListNode* createListNode(int data){
	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	new_node->data = data;
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
void push(Queue *q, int data){
	ListNode* new_node = createListNode(data);
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
int front(Queue *q){
	if(!empty(q))
		return q->head->data;
}
int size(Queue *q){
	return q->curr_size;
}