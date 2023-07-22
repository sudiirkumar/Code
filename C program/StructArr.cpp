#include<stdio.h>
typedef struct Student{
    char name[30];
    int roll;
    int marks;
    char address[30];
}Student;
int main(){
    Student st[5];
    for(int i=0;i<5;i++){
        printf("Enter name: ");
        fflush(stdin);
        gets(st[i].name);
        printf("Enter roll: ");
        scanf("%d",&st[i].roll);
        printf("Enter marks: ");
        scanf("%d",&st[i].marks);
        printf("Enter address: ");
        fflush(stdin);
        gets(st[i].address);
    }
    for(int i=0;i<5;i++){
        printf("\n\nName: %s",st[i].name);
        printf("\nRoll: %d",st[i].roll);
        printf("\nMarks: %d",st[i].marks);
        printf("\nAddress: %s",st[i].address);
    }
    return 0;
}