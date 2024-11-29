#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null NULL

typedef struct Node{
	int data;
	struct Node* next;
}Node;
typedef struct Queue{
	Node* front;
	Node* rear;
}Queue;
Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = null;
	return newNode;
}
Queue* createQueue(){
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->front = q->rear = null;
	return q;
}
void enqueue(Queue* q,int data){
	Node* newNode = createNode(data);
	if(q->front == null){
		q->front = newNode;
		q->rear = newNode;
		return;
	}
	q->rear->next = newNode;
	q->rear = newNode;
}
int dequeue(Queue* q){
	Node* temp = q->front;
	if(temp==null){
		return -1;
	}
	q->front = q->front->next;
	temp->next = null;
	return temp->data;
}
int front(Queue* q){
	if(q->front==null)
		return -1;
	return q->front->data;
}
void display(Queue* q){
	Node* temp;
	if(q->front == null){
		printf("\nQueue is empty\n");
		return;
	}
	printf("\nContent of queue are: \n");
	temp = q->front;
	while(temp!=null){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void main(){
	Queue* q = createQueue();
	clrscr();
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	display(q);
	dequeue(q);
	dequeue(q);
	display(q);
	getch();
}