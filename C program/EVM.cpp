#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int ch;
    char ans;
    int count[7]={0};
    do{
        system("cls");
        char ch;
        printf("\n1.Bhartiya Janta Party\n2.Congress\n3.Rastriya Janta Dal\n4.Janta Dal United\n5.Aam Admi Party\n6.None of the above\n\nEnter your choice: ");
        ch = getche();
        switch(ch){
            case '1': count[1]++;
                    break;
            case '2' : count[2]++;
                    break;
            case '3': count[3]++;
                    break;
            case '4' : count[4]++;
                    break;
            case '5': count[5]++;
                    break;
            case '6' : count[6]++;
                    break;
            default: count[0]++;
        }
        printf("Is there any voters left? (Y/N): ");
        ans = getche();
    }
    while(ans=='y'||ans=='Y');
    
    return 0;
}