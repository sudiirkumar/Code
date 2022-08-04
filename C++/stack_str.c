#include<stdio.h>
#include<conio.h>
#define size 5
struct Stack{
    int items[size];
    int top;
};
typedef struct Stack stack;
int empty(stack);

int empty(stack s){
    if(s.top==-1){
        return 1;
    }
    return 0;
}
int full(stack s){
    if(s.top==size-1){
        return 1;
    }
    return 0;
}
void push(int item,stack *s){
    
}