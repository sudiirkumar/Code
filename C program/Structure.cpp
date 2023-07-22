#include<stdio.h>
typedef struct Student{
    char name[30];
    int roll;
    int marks;
    char address[30];
}Student;
int main(){
    Student st1;
    //Input
    printf("Enter name: ");
    fflush(stdin);
    gets(st1.name);
    printf("Enter roll: ");
    scanf("%d",&st1.roll);
    printf("Enter marks: ");
    scanf("%d",&st1.marks);
    printf("Enter address: ");
    fflush(stdin);
    gets(st1.address);
    //Output
    printf("\nName: %s",st1.name);
    printf("\nRoll: %d",st1.roll);
    printf("\nMarks: %d",st1.marks);
    printf("\nAddress: %s",st1.address);
    return 0;
}