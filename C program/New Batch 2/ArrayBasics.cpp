//Create an array of size 10 and perform these operations: 
//1. Input and output
//2. Sum of elements
//3. Print even and odd elements
//4. Count even and odd elements
//5. Sum of even and odd elements
//6. Print array in reverse
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    printf("\nContents of array: \n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);//1 2 3 4 5 6 7 8 9 10
        sum = sum + arr[i];
    }
    printf("\nReverse array: \n");
    for(int i=9;i>=0;i--){
        printf("%d ",arr[i]);
    }
    int evenSum = 0, oddSum = 0;
    int countEven = 0, countOdd = 0;
    printf("\nEven numbers: \n");
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
            evenSum += arr[i];
            countEven++;
        }
    }
    printf("\nOdd numbers: \n");
    for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
            oddSum += arr[i];
            countOdd++;
        }
    }
    printf("\nNumber of even elements: %d",countEven);
    printf("\nNumber of odd elements: %d",countOdd);
    printf("\nSum of all numbers: %d",sum);
    printf("\nSum of even numbers: %d",evenSum);
    printf("\nSum of odd numbers: %d",oddSum);
    return 0;
}