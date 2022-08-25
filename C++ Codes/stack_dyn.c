#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define new (node*)malloc(sizeof(node))
struct Node{
    int item;
    struct Node* next;
};
typedef struct Node node;

node* push(node*);
node* pop(node*);
void display(node*);

int main(){
    int ch;
    int i;
    node* head = NULL;
    do{
        system("cls");
        printf("\n1.Push\n2.Pop\n3.Display\n0.Exit\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            head = push(head);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            display(head);
            break;
        default:
            return 0;
            break;
        }
        getch();
    }while(1);
    return 0;
}
node* push(node* head){
    node* temp = new;
    temp->next = NULL;
    printf("\nEnter data : ");
    scanf("%d",&temp->item);
    if(head==NULL){
        head = temp;
        return head;
    }
    temp->next = head;
    head = temp;
    return head;
}
node* pop(node* head){
    if(head!=NULL){
        node* temp = head;
        head = head->next;
        printf("\nItem popped : %d",temp->item);
        free(temp);
        return head;
    }
    printf("\nStack is empty");
    return NULL;
}
void display(node* head){
    node* temp = head;
    if(temp==NULL){
        printf("\nStack is empty");
        return;
    }
    printf("\nContents of stack are : \n");
    while(temp!=NULL){
        printf("%d ",temp->item);
        temp = temp->next;
    }
}
