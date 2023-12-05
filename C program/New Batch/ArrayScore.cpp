#include<stdio.h>
int main(){
    int score[5];//score[0],score[1],score[2],score[3],score[4]
    for(int i=0;i<5;i++){
        printf("Enter score: ");
        scanf("%d",&score[i]);
    }
    //Print value
    printf("\nScores scored by batsman: \n");
    for(int i=0;i<5;i++){
        printf("%d ",score[i]);
    }
    int sum=0;
    int maxm = score[0];
    int minm = score[0];
    for(int i=0;i<5;i++){
        sum = sum + score[i];
        if(maxm<score[i]){
            maxm = score[i];
        }
        if(minm>score[i]){
            minm = score[i];
        }
    }
    int avg = sum/5;
    printf("\nTotal score in 5 matches: %d",sum);
    printf("\nAverage score: %d",avg);
    printf("\nMaxm score: %d",maxm);
    printf("\nMinm score: %d",minm);
    return 0;
}