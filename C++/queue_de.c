#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int full(int);
int empty(int,int);
int full(int r){
    return r==size;
}
int empty(int f,int r){
    return f>r;
}
void push_back(int q[],int *r,int data){
    if(!full(*r)){
        q[++(*r)] = data;
        return;
    }
    printf("\nQueue is full");
}
void push_front(int q[],int *f,int *r,int data){
    if(*f==0 && r==-1){
        q[++(*r)] = data;
    }
    else if(*f!=0){
        
    }

}
void pop_front(int q[],int *f,int *r){
    if(!empty(*f,*r)){
        printf("\nData popped : %d",q[(*f)++]);
        if(*f>*r){
            *f = 0;
            *r = -1;
        }
        return;
    }
    printf("\nQueue is empty");
}
void display(int q[],int f,int r){
    if(!empty(f,r)){
        int i;
        printf("\nContents of queue are : \n");
        for(i=f;i<=r;i++){
            printf("%d ",q[i]);
        }
        return;
    }
    printf("\nStack is empty");
}
int main(){
    int ch;
    int data;
    int q[size];
    int r=-1,f=0;
    do{
        system("cls");
        printf("\n1.Push\n2.Pop\n3.Display\n0.Exit\nEnter a choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a data : ");
            scanf("%d",&data);
            push_back(q,&r,data);
            break;
        case 2:
            pop_front(q,&f,&r);
            break;
        case 3:
            display(q,f,r);
            break;
        default:
            return 0;
            break;
        }
        getch();
    }while(1);
    return 0;
}
