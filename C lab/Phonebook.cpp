#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int noOfCustomer = 0;
typedef struct Customer{
    int cno;
    char cname[30];
    char cmobile[10];
    int noOfSearch;
}Customer;
void displayCustomerDetails(Customer c){
    printf("\nCustomer no. %d",c.cno);
    printf("\nName. %s",c.cname);
    printf("\nMobile no. %s\n",c.cmobile);
}
typedef struct Node
{
    Customer c;
    Node* link;
}Node;
Node* addCustomer(Node* head){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->c.noOfSearch = 0;
    newNode->c.cno = ++noOfCustomer;
    printf("\nEnter name of Customer: ");
    fflush(stdin);
    gets(newNode->c.cname);
    printf("Enter mobile number of Customer: ");
    fflush(stdin);
    gets(newNode->c.cmobile);
    newNode->link = head;
    head = newNode;
    return head;
}
void displayCustomers(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        displayCustomerDetails(curr->c);
        curr = curr->link;
    }
}
void search(Node* head, int cno){
    Node* curr = head;
    while(curr!=NULL){
        if(curr->c.cno == cno){
            printf("\nResult found: \n");
            (curr->c.noOfSearch)++;
            displayCustomerDetails(curr->c);
            return;
        }
        curr = curr->link;
    }
    printf("\nNo results found.");
}
Node* favCustomer(Node* head){
    Node *newHead = NULL;
    while(head!=NULL){
        if(head->c.noOfSearch > 1){
            Node* newNode = (Node*)malloc(sizeof(Node));
            newNode->c.cno = head->c.cno;
            strcpy(newNode->c.cname,head->c.cname);
            strcpy(newNode->c.cmobile,head->c.cmobile);
            newNode->c.noOfSearch = head->c.cno;
            newNode->link = newHead;
            newHead = newNode;
        }
        head = head->link;
    }
    return newHead;
}
int main(){
    Node* head = NULL;
    Node *fav;
    int ch,cno;
    do{
        system("cls");
        printf("\nWELCOME TO PHONEBOOK SERVICE\n\n\n");
        printf("\nNumber of customer details: %d\n",noOfCustomer);
        printf("\n1. Display all customers details");
        printf("\n2. Add a new customer");
        printf("\n3. Search for a customer");
        printf("\n4. Display favourite customers");
        printf("\n0. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nDetails of all customers are: \n");
                displayCustomers(head);
                break;
            case 2:
                head = addCustomer(head);
                break;
            case 3:
                printf("\nEnter cno of customer: ");
                scanf("%d",&cno);
                search(head,cno);
                break;
            case 4:
                printf("\nDetails of all favourite customers are: \n");
                fav = favCustomer(head);
                displayCustomers(fav);
                break;
            case 0:
                exit(0);
        }
        getch();
    }
    while(1);
    return 0;
}