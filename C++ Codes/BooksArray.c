#include<stdio.h>
struct Book
{
    char name[100];
    int price;
    int no_of_pages;
    char publisher_name[100];
};
int main(){
    
    struct Book book[5];//creating a array of structure Book
    int i;
    //Input details
    for(i=0;i<5;i++){
        printf("\n\nBook %d : \n",i+1);
        printf("\nEnter name of the book : ");
        scanf("%s",&book[i].name);
        printf("Enter price of the book : ");
        scanf("%d",&book[i].price);
        printf("Enter number of pages : ");
        scanf("%d",&book[i].no_of_pages);
        printf("Enter name of publisher : ");
        scanf("%s",&book[i].publisher_name);
        fflush(stdin);
    }
    system("cls");
    //output details
    printf("\n\n\n--------------------Books details-------------------\n\n");
    printf("\nName of book        Price   Pages   Publisher Name\n");
    printf("----------------------------------------------------\n");
    for(i=0;i<5;i++){
        printf("\n%-20s%-8d%-8d%14s",book[i].name,book[i].price,book[i].no_of_pages,book[i].publisher_name);
    }
    return 0;
}
