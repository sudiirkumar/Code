#include<stdio.h>
#include<process.h>
#include<conio.h>
#define size 5
int full(int);
int empty(int);

void push(int data,int *top,int s[]){
    if(full(*top)==0){
        s[++(*top)] = data;
    }
}
int pop(int *top,int s[]){
    if(empty(*top)==1){
        return 0;
    }
    return s[(*top)--];
}
void display(int top,int s[]){
    int i;
    if(empty(top)){
        return;
    }
    printf("\nContents of stack : \n");
    for(i=0;i<=top;i++){
        printf("%d ",s[i]);
    }
}
int full(int top){
    if(top==size-1){
        printf("\nStack is full\n");
        return 1;
    }
    return 0;
}
int is_empty(int top){
    if(top==-1){
        printf("\nStack is empty\n");
        return 1;
    }
    return 0;
}
int main(){
    int s[size];
    int top=-1;
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
            push(data,&top,s);
            break;
        case 2:
            data = pop(&top,s);
            if(data){
                printf("\nData at the top : %d",data);
            }
            break;
        case 3:
            display(top,s);
            break;
        default:
            return 0;
        }
    getch();
    }while(1);
    return 0;
}