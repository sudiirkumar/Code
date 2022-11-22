#include<stdio.h>
#include<climits>
int main(){
    int marks[5][3];
    for(int i=0;i<5;i++){
        printf("Enter marks of student %d: ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    int sum;
    int maxm=INT_MIN;
    for(int i=0;i<5;i++){
        sum = 0;
        for(int j=0;j<3;j++){
            sum += marks[i][j];
        }
        if(maxm<sum){
            maxm = sum;
        }
        printf("\nTotal marks of student %d: %d",i+1,sum);
    }
    printf("\n\nTopper marks: %d",maxm);
    return 0;
}