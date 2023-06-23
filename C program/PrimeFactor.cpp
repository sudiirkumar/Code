#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i,j;
    printf("Prime factors of %d are: \n",num);
    for(i=2;i<=num;i++){
        if(num%i==0){
            for(j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    break;
                }
            }
            if(j>sqrt(i)){
                printf("%d ",i);
            }
        }
    }
    return 0;
}