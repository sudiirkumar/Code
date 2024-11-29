#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null NULL

typedef struct Node{
	int data;
	struct Node* next;
}Node;

typedef struct LL{
	Node* head;
	Node* tail;
}LL;

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = null;
	return newNode;
}
LL* createLL(){
	LL* l = (LL*)malloc(sizeof(LL));
	l->head = l->tail = null;
	return l;
}
void insertAtHead(LL* l,int data){
	Node* newNode = createNode(data);
	newNode->next = l->head;
	if(l->tail==null)
		l->tail = newNode;
	l->head = newNode;
}
void insertAtTail(LL* l, int data){
	Node* newNode = createNode(data);
	l->tail->next = newNode;
	if(l->head==null)
		l->head = newNode;
	l->tail = newNode;
}
void reverse(LL* l){
	Node* prev = null;
	Node* curr = l->head;
	Node* next;
	while(curr!=null){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	l->head = prev;
}
void display(LL* l){
	Node* curr;
	if(l->head == null){
		printf("\nLinked list is empty\n");
		return;
	}
	curr = l->head;
	while(curr!=null){
		printf("%d --> ",curr->data);
		curr = curr->next;
	}
	printf("NULL\n");
}
void insert(LL* l, int data){
	Node* curr;
	Node* newNode = createNode(data);
	if(l->head==null){
		l->head = l->tail = newNode;
		return;
	}
	if(l->head->data > data){
		newNode->next = l->head;
		l->head = newNode;
		return;
	}
	if(l->tail->data < data){
		l->tail->next = newNode;
		l->tail = newNode;
		return;
	}
	curr = l->head;
	while(curr!=NULL && curr->next->data < data){
		curr = curr->next;
	}
	newNode->next = curr->next;
	curr->next = newNode;
}
void removell(LL* l, int data){
	Node* temp;
	if(l->head == null)
		return;
	if(l->head->data == data){
		l->head = l->head->next;
	}
	temp = l->head;
	while(temp!=null){
		if(temp->next->data == data){
			break;
		}
		temp = temp->next;
	}
	temp->next = temp->next->next;
}
void main(){
	LL* l = createLL();
	clrscr();
	insert(l,12);
	insert(l,5);
	insert(l,-1);
	insert(l,3);
	insert(l,6);
	display(l);
	removell(l,12);
	display(l);
	getch();
}