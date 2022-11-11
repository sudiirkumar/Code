#include<stdio.h>
#include<stdlib.h>
#include<climits>
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
        printf("\nIs there any voters left? (Y/N): ");
        ans = getche();
    }
    while(ans=='y'||ans=='Y');
    printf("\n\nResults\n\n");
    printf("1.BJP\t%d",count[1]);
    printf("\n2.INC\t%d",count[2]);
    printf("\n3.RJD\t%d",count[3]);
    printf("\n4.JDU\t%d",count[4]);
    printf("\n5.AAP\t%d",count[5]);
    printf("\n6.NOTA\t%d",count[6]);
    printf("\n\nWasted votes\t%d\n",count[0]);
    int maxm = 1;
    for(int i=2;i<=5;i++){
        if(count[maxm]<count[i]){
                maxm = i;
        }
    }
    switch(maxm){
        case 1: printf("BJP is winner with %d votes",count[maxm]);
                break;
        case 2: printf("INC is winner with %d votes",count[maxm]);
                break;
        case 3: printf("RJD is winner with %d votes",count[maxm]);
                break;
        case 4: printf("JDU is winner with %d votes",count[maxm]);
                break;
        case 5: printf("AAP is winner with %d votes",count[maxm]);
                break;
    }
    return 0;
}