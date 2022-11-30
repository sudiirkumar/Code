#include<stdio.h>

struct Student{//164
    char name[100];//100
    int roll;//4
    char batch[10];//10
    char dob[20];//20
    char college[30];//30
};
int main(){
    //declaration
    struct Student s1;
    //input
    printf("Enter name: ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter roll: ");
    fflush(stdin);
    scanf("%d",&s1.roll);
    printf("Enter batch: ");
    fflush(stdin);
    gets(s1.batch);
    printf("Enter DOB: ");
    fflush(stdin);
    gets(s1.dob);
    printf("Enter college name: ");
    fflush(stdin);
    gets(s1.college);
    // output
    printf("\nDETAILS\n");
    printf("\nName: ");
    puts(s1.name);
    printf("Roll : %d",s1.roll);
    printf("\nBatch: ");
    puts(s1.batch);
    printf("DOB: ");
    puts(s1.dob);
    printf("College name: ");
    puts(s1.college);
    return 0;
}