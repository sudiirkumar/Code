#include<stdlib.h>
#include<stdio.h>
struct Book
{
    char name[100];
    int price;
    int no_of_pages;
    char publisher_name[100];
};
int main(){
    
    struct Book book1;//creating a book1 reference variable
    //Input details
    printf("\nEnter name of the book : ");
    scanf("%s",&book1.name);
    printf("\nEnter price of the book : ");
    scanf("%d",&book1.price);
    printf("\nEnter number of pages : ");
    scanf("%d",&book1.no_of_pages);
    printf("\nEnter name of publisher : ");
    scanf("%s",&book1.publisher_name);
    system("cls");
    //output details
    printf("\n\n------------Book details------------\n\n");
    printf("Name                %15s\n",book1.name);
    printf("Price               %15d\n",book1.price);
    printf("Number of pages     %15d\n",book1.no_of_pages);
    printf("Name of publisher   %15s\n",book1.publisher_name);

    return 0;
}
