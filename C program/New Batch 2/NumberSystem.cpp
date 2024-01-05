#include<stdio.h>
int pow(int base, int exp){
    int ans = 1;
    for(int i=0;i<exp;i++){
        ans *= base;
    }
    return ans;
}
int decimalToOther(int num, int r){
    int ans = 0;
    int rem;
    int i=0;
    while(num>0){
        rem = num%r;
        ans = rem*pow(10,i) + ans;
        i++;
        num /= r;
    }
    return ans;
}
int otherToDecimal(int num,int r){
    int ans = 0;
    int lastDig;
    int i=0;
    while(num>0){
        lastDig = num%10;
        ans = lastDig*pow(r,i) + ans;
        i++;
        num /= 10;
    }
    return ans;
}
int main(){
    int choice;
    int num;
    int temp;
    char ch;
    do{
        printf("Choose any one of them: \n");
        printf("\n1. Convert Decimal to Binary");
        printf("\n2. Convert Decimal to Octal");
        printf("\n3. Convert Binary to Decimal");
        printf("\n4. Convert Binary to Octal");
        printf("\n5. Convert Octal to Binary");
        printf("\n6. Convert Octal to Decimal");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter a decimal number: ");
                    scanf("%d",&num);
                    printf("\nBinary number: %d",decimalToOther(num,2));
                    break;
            case 2: printf("Enter a decimal number: ");
                    scanf("%d",&num);
                    printf("\nOctal number: %d",decimalToOther(num,8));
                    break;
            case 3: printf("Enter a Binary number: ");
                    scanf("%d",&num);
                    printf("\nDecimal number: %d",otherToDecimal(num,2));
                    break;
            case 4: printf("Enter a Binary number: ");
                    scanf("%d",&num);
                    temp = otherToDecimal(num,2);
                    printf("\nOctal number: %d",decimalToOther(temp,8));
                    break;
            case 5: printf("Enter a octal number: ");
                    scanf("%d",&num);
                    temp = otherToDecimal(num,8);
                    printf("\nBinary number: %d",decimalToOther(temp,2));
                    break;
            case 6: printf("Enter a octal number: ");
                    scanf("%d",&num);
                    printf("\nDecimal number: %d",otherToDecimal(num,8));
                    break;
        }
        printf("\nDo you want to continue?(Y/N): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;
}