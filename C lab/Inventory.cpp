#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int ProductID = 0;
int noOfProduct = 0;
typedef struct Product{
    int productID;
    char productName[30];
    int price;
    int noOfBuy;
}Product;
typedef struct Node
{
    Product p;
    Node* link;
}Node;
void displayProductDetails(Product p){
    printf("\nProduct id: %d",p.productID);
    printf("\nName: %s",p.productName);
    printf("\nPrice: %d\n",p.price);
}
void displayProducts(Node* head){
    while(head!=NULL){
        displayProductDetails(head->p);
        head = head->link;
    }
}
Node* insertProduct(Node* head){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->p.productID = ++ProductID;
    newNode->p.noOfBuy = 0;
    printf("\nEnter name of product: ");
    fflush(stdin);
    scanf("%s",newNode->p.productName);
    printf("Enter price of product: ");
    scanf("%d",&newNode->p.price);
    newNode->link = head;
    head = newNode;
    return head;
}
Node* search(Node* head, int pid){
    while(head->link!=NULL){
        if(head->link->p.productID==pid){
            return head;
        }
    }
    return NULL;
}
Node* addItem(Node* head, Node* item){
    Node* newNode = (Node*)malloc(sizeof(Node));
    (item->p.noOfBuy)++;
    noOfProduct++;
    newNode->p.noOfBuy = item->p.noOfBuy;
    newNode->p.price = item->p.price;
    newNode->p.productID = item->p.productID;
    strcpy(newNode->p.productName,item->p.productName);
    if(head==NULL)
        return newNode;
    newNode->link = head;
    head = newNode;
    return head;
}
void printFav(Node* head){
    while (head!=NULL)
    {
        if(head->p.noOfBuy>1){
            displayProductDetails(head->p);
        }
    }
    
}
int main(){
    Node* productHead = NULL;
    Node* transHead = NULL;
    Node* search_res;
    int ch;
    int pid;
    do{
        system("cls");
        printf("\nWELCOME TO INVENTORY\n\n");
        printf("\nNumber of products in cart: %d\n",noOfProduct);
        printf("\n1. Enter product details");
        printf("\n2. Display cart products");
        printf("\n3. Add a product in cart");
        printf("\n4. Remove a product in cart");
        printf("\n5. Search a product");
        printf("\n6. Display most buyed products");
        printf("\n0. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            for(int i=0;i<4;i++){
                productHead = insertProduct(productHead);
            }
            break;
        case 3:
            printf("\nList of the products: ");
            displayProducts(productHead);
            printf("\n\nEnter product id to add: ");
            scanf("%d",&pid);
            search_res = search(productHead,pid)->link;
            if(search_res==NULL)
                printf("\nProduct not found");
            else{
                transHead = addItem(transHead,search_res);
                printf("Product added successfully");
            }
            break;
        case 2:
            printf("\nProducts in cart:\n");
            displayProducts(transHead);
            break;
        case 4:
            printf("\nList of the products in cart: ");
            displayProducts(transHead);
            printf("\n\nEnter product id to delete: ");
            scanf("%d",&pid);
            search_res = search(productHead,pid);
            search_res->link = search_res->link->link;
            printf("Product deleted successfully");
            break;
        case 5:
            printf("\n\nEnter product id to add: ");
            scanf("%d",&pid);
            search_res = search(productHead,pid)->link;
            displayProductDetails(search_res->p);
            transHead = addItem(transHead,search_res);
            printf("Product added successfully");
            break;
        case 6:
            printf("\nMost frequently bought products: \n");
            printFav(productHead);
            break;
        case 0: exit(0);
        }
        getch();
    }
    while(1);
    return 0;
}