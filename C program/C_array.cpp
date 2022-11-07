#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<climits>
int main(){
    int a[100];
    int n;
    int ch;
    int sum;
    do{
        system("cls");
        printf("\n1.Input\n2.Print\n3.Even\n4.Odd\n5.Non-negative\n6.Negative\n7.Prime\n8.Sum\n9.Average\n10.Logical reverse\n11.Greatest number and Smallest number\n0.Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("\nEnter number of values: ");
                    scanf("%d",&n);
                    for(int i=0;i<n;i++){
                        printf("Enter a number: ");
                        scanf("%d",&a[i]);
                    }
                    break;
            case 2: printf("\nContents of array is: \n");
                    for(int i=0;i<n;i++){
                        printf("%d ",a[i]);
                    }
                    break;
            case 3: printf("\nEven contents of array is: \n");
                    for(int i=0;i<n;i++){
                        if(a[i]%2==0)
                            printf("%d ",a[i]);
                    }
                    break;
            case 4: printf("\nOdd contents of array is: \n");
                    for(int i=0;i<n;i++){
                        if(a[i]%2==1)
                            printf("%d ",a[i]);
                    }
                    break;
            case 5: printf("\nNon-negative contents of array is: \n");
                    for(int i=0;i<n;i++){
                        if(a[i]>=0)
                            printf("%d ",a[i]);
                    }
                    break;
            case 6: printf("\nNegative contents of array is: \n");
                    for(int i=0;i<n;i++){
                        if(a[i]<0)
                            printf("%d ",a[i]);
                    }
                    break;
            case 8: sum=0;
                    for(int i=0;i<n;i++){
                        sum = sum + a[i];
                    }
                    printf("\nSum: %d",sum);
                    break;
            case 9: sum=0;
                    for(int i=0;i<n;i++){
                        sum = sum + a[i];
                    }
                    printf("\nAverage: %.2f",sum*1.0/n);
                    break;
            case 7: printf("\nPrime numbers are: \n");
                    for(int i=0;i<n;i++){
                        if(a[i]==0||a[i]==1){
                            continue;
                        }
                        int isPrime=1;
                        for(int j=2;j<=sqrt(a[i]);j++){
                            if(a[i]%j==0){
                                isPrime = 0;
                                break;
                            }
                        }
                        if(isPrime==1){
                            printf("%d ",a[i]);
                        }
                    }
                    break;
            case 10:printf("\nArray in reverse order: \n");
                    for(int i=n-1;i>=0;i--){
                        printf("%d ",a[i]);
                    }
                    break;
            case 11:int maxm;
                    int minm;
                    maxm = a[0];
                    minm = a[0];
                    for(int i=1;i<n;i++){
                        if(maxm<a[i]){
                            maxm = a[i];
                        }
                        if(minm>a[i]){
                            minm = a[i];
                        }
                    }
                    printf("\nGreatest Number: %d\nSmallest Number: %d",maxm,minm);
                    break;
            case 0: exit(0);
        }
        printf("\n\nPress any key to continue...");
        getch();
    }
    while(1);//1!=0
    return 0;
}