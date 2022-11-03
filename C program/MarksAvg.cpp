//print marks,total,percentage,avg
#include<stdio.h>
int main(){
    //declare
    // int sub1,sub2,sub3,sub4,sub5;
    int sub[5];
    //input
    // printf("Enter 5 marks: ");
    // scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    for(int i=0;i<5;i++){
        printf("Enter marks %d: ",i+1);
        scanf("%d",&sub[i]);
    }
    //output
    //printf("Marks--\nSubject1 = %d\nSubject2 = %d\nSubject3 = %d\nSubject4 = %d\nSubject5 = %d",sub1,sub2,sub3,sub4,sub5);
    printf("\nMARKS\n");
    for(int i=0;i<5;i++){
        printf("\nMarks %d = %d",i+1,sub[i]);
    }
    //int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + sub[i];
    }
    int perc = sum * 100 / 500;
    int avg = sum / 5;
    printf("\nTotal marks: %d\nPercentage: %d\nAverage: %d",sum,perc,avg);
    return 0;
}