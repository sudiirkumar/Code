#include<stdio.h>
#include<string.h>
typedef struct Laptop{
    char companyName[30];
    int price;
    int id;
}Laptop;
void printDetails(Laptop *l){
    printf("\nName: %s",l->companyName);
    printf("\nId: %d",l->id);
    printf("\nPrice: %d",l->price);
}
void inputDetails(Laptop *l){
    printf("\nEnter company name: ");
    fflush(stdin);
    gets(l->companyName);
    printf("Enter id: ");
    scanf("%d",&(l->id));
    printf("Enter price: ");
    scanf("%d",&(l->price));
}
int main(){
    Laptop l[5];
    for(int i=0;i<5;i++){
        inputDetails(l+i);
    }
    for(int i=0;i<5;i++){
        printDetails(l+i);
    }
    // strcpy(l1.companyName,"Lenovo");
    // l1.id = 1;
    // l1.price = 35000;
    // printDetails(&l1);
    // struct Laptop l2;
    // strcpy(l2.companyName,"Dell");
    // l2.id = 2;
    // l2.price = 45000;
    // printDetails(&l2);
    return 0;
}