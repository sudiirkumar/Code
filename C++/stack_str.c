#include<stdio.h>
#include<conio.h>
#define size 5
struct Stack{
    int items[size];
    int top;
};
typedef struct Stack stack;
int empty(stack);
int full(stack);

int empty(stack s){
    if(s.top==-1){
        printf("\nStack is empty");
        return 1;
    }
    return 0;
}
int full(stack s){
    if(s.top==size-1){
        printf("\nStack is full");
        return 1;
    }
    return 0;
}
void push(int item,stack *s){
    if(!full(*s)){
        s->items[++(s->top)] = item;
    }
    return 0;
}
void display(stack s){
    if(empty(s)){
        return;
    }
    int i;
    printf("\nContents of stack : \n");
    for(i=0;i<=s.top;i++){
        printf("%d ",s.items[i]);
    }
}
int pop(stack *s){
    if(!empty(*s)){
        return s->items[(s->top)--];
    }
}
int main(){
    stack s;
    s.top=-1;
    int ch;
    int i;
    int data;
    do
    {
        system("cls");
        printf("\n\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a number : ");
            scanf("%d",&data);
            push(data,&s);
            break;
        case 2:
            data = pop(&s);
            if(data){
                printf("\nData at the top : %d",data);
            }
            break;
        case 3:
            display(s);
            break;
        default:
            return 0;
        }
    getch();
    }while(1);
    return 0;
}

