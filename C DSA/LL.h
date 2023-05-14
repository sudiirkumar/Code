#include <stdlib.h>
typedef struct Node{
	int data;
	Node* next;
}Node;
Node* createNode(int data){
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;
}
typedef struct LL{
	Node* head;
	Node* tail;
	int size;
}LL;
LL* createList(){
	LL* l = (LL*)malloc(sizeof(LL));
	l->head = l->tail = NULL;
	l->size = 0;
}
void push_front(LL* l,int data){
	Node *new_node = createNode(data);
	if(l->head==NULL){
		l->head = l->tail = new_node;
	}
	else{
		new_node->next = l->head;
		l->head = new_node;
	}
	(l->size)++;
}
void push_back(LL* l, int data){
	Node* new_node = createNode(data);
	if(l->head==NULL){
		l->head = l->tail = new_node;
	}
	else{
		l->tail->next = new_node;
		l->tail = new_node;
	}
	(l->size)++;
}
int size(LL* l){
	return l->size;
}
void pop_front(LL* l){
	if(l->head==NULL){
		return;
	}
	Node* temp = l->head;
	l->head = l->head->next;
	temp->next = NULL;
	free(temp);
	(l->size)--;
}
void pop_back(LL* l){
	if(l->head==NULL){
		return;
	}
	Node* temp = l->head;
	while(temp->next!=l->tail){
		temp = temp->next;
	}
	l->tail = temp;
	temp = temp->next;
	l->tail->next = NULL;
	free(temp);
	(l->size)--;
}
void reverse(LL* l){
	Node* prev = NULL;
	Node* curr = l->head;
	Node* next;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	l->head = prev;
}