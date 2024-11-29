#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20

typedef struct Stack{
	int arr[MAX];
	int top;
}Stack;

Stack* createStack(){
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
void push(Stack* s, int data){
	if(s->top==MAX-1){
		printf("\nStacks overflow\n");
		return;
	}
	s->arr[++s->top] = data;
}
int pop(Stack* s){
	if(s->top==-1){
		printf("\nStacks underflow\n");
		return -1;
	}
	return s->arr[s->top--];
}
int top(Stack* s){
	if(s->top==-1){
		printf("\nStack is empty\n");
		return -1;
	}
	return s->arr[s->top];
}
void show(Stack *s){
	int i;
	for(i=s->top;i>=0;i--)
		printf("%d\n",s->arr[i]);
	printf("\n");
}
void main(){
	Stack* s;
	clrscr();
	s = createStack(s);
	push(s,10);
	push(s,34);
	push(s,45);
	show(s);
	pop(s);
	pop(s);
	show(s);
	pop(s);
	pop(s);
	getch();
}