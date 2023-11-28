#include<iostream>
using namespace std;
int main(){
    //Declare and input
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }
    //Output
    printf("\nMarks of all subjects are as follows: \n");
    for(int i=0;i<5;i++){
        printf("\nSubject %d: %d",i+1,marks[i]);
    }
    //Sum or total
    int total=0;
    for(int i=0;i<5;i++){
        total = total + marks[i];
    }
    int percentage = total/5;
    printf("\n\nTotal marks: %d",total);
    printf("\nPercentage: %d",percentage);
    //Maxm and Minm
    int maxm = marks[0];
    int minm = marks[0];
    for(int i=0;i<5;i++){// 20 35 33 60 40
        if(marks[i]>maxm){
            maxm = marks[i];
        }
        if(marks[i]<minm){
            minm = marks[i];
        }
    }
    printf("\n\nMaxm marks: %d",maxm);
    printf("\nMinm marks: %d",minm);
    return 0;
}