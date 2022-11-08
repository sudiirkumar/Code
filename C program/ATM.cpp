#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int pin[4] = {1234,2341,5555,9696};
    int in_pin;
    int bal[4] = {0,18,10000,500};
    int balance;
    char ans;
    printf("\nEnter your pin: ");
    scanf("%d",&in_pin);
    int hasMatched = 0;
    for(int i=0;i<4;i++){
        if(in_pin==pin[i]){
            hasMatched = 1;
            balance = bal[i];
            break;
        }
    }
    if(hasMatched==1){
        do{
            system("cls");
            int ch;
            int input;
            printf("\n1.Balance enquiry\n2.Withdraw\n3.Deposit\n\nEnter your choice: ");
            scanf("%d",&ch);
            switch(ch){
                case 1: printf("\nYour account balance is:\t%d",balance);
                        break;
                case 3: printf("\nEnter amount to deposit (multiple of 100): ");
                        scanf("%d",&input);
                        if(input%100==0 && input>0){
                            balance = balance + input;
                            printf("\nBalance is deposited");
                            printf("\nYour current balance: %d",balance);
                        }
                        else{
                            printf("\nAmount not in a multiple of 100");
                        }
                        break;
                case 2: printf("\nEnter amount to withdraw (multiple of 100): ");
                        scanf("%d",&input);
                        if(input%100==0 && input<=balance && input>0){
                            balance = balance - input;
                            printf("\nAmount is withdrawn");
                            printf("\nYour current balance: %d",balance);
                        }
                        else if(input%100!=0){
                            printf("\nAmount is not a multiple of 100");
                        }
                        else if(input>balance){
                            printf("\nWithdraw amount is more than current balance");
                        }
                        else{
                            printf("\nWrong input");
                        }
                        break;
                default: printf("\nWrong choice");
            }
            printf("\nDo you want to continue? (Y/N) : ");
            ans = getche();
        }
        while(ans=='y'||ans=='Y');
    }
    else{
        printf("\nWrong pin\n");
    }
    return 0;
}