#include<stdio.h>
typedef struct Person{
    char name[100];
    int age;
    char city[20];
    char mobile[20];
    char al_mobile[20];
    char country[10];
    int ht;
}Person;

void input(Person *p){
    printf("Enter name: ");
    fflush(stdin);
    gets(p->name);
    printf("Enter age: ");
    fflush(stdin);
    scanf("%d",&p->age);
    printf("Enter city: ");
    fflush(stdin);
    gets(p->city);
    printf("Enter mobile number: ");
    fflush(stdin);
    gets(p->mobile);
    printf("Enter alternate mobile number: ");
    fflush(stdin);
    gets(p->al_mobile);
    printf("Enter country name: ");
    fflush(stdin);
    gets(p->country);
    printf("Enter height: ");
    scanf("%d",&p->ht);
}
void disp(Person *p){
    printf("\nDETAILS\n");
    printf("\nName: ");
    fflush(stdout);
    puts(p->name);
    fflush(stdout);
    printf("Age: %d",p->age);
    fflush(stdout);
    printf("\nHeight: %d",p->age);
    printf("\nCity: ");
    fflush(stdout);
    puts(p->city);
    printf("Mobile: ");
    fflush(stdout);
    puts(p->mobile);
    printf("Alternate mobile: ");
    fflush(stdout);
    puts(p->al_mobile);
    printf("Country: ");
    fflush(stdout);
    puts(p->country);
}
int main(){
    Person person[5];
    // printf("Size of person1: %d",sizeof(person1));
    for(int i=0;i<5;i++){
        input(person+i);//input(&person[i])
    }
    for(int i=0;i<5;i++){
        disp(person+i);//disp(&person[i])
    }
}