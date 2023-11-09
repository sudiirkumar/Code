#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int c0 = 0,c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0,c6 = 0,c7 = 0,c8 = 0,c9 = 0;
    int dig;
    while(num>0){
        dig = num%10;
        num /= 10;
        switch(dig){
            case 0: c0++;
                    break;
            case 1: c1++;
                    break;
            case 2: c2++;
                    break;
            case 3: c3++;
                    break;
            case 4: c4++;
                    break;
            case 5: c5++;
                    break;
            case 6: c6++;
                    break;
            case 7: c7++;
                    break;
            case 8: c8++;
                    break;
            case 9: c9++;
                    break;
        }
    }
    printf("\nCount of 0's: %d",c0);
    printf("\nCount of 1's: %d",c1);
    printf("\nCount of 2's: %d",c2);
    printf("\nCount of 3's: %d",c3);
    printf("\nCount of 4's: %d",c4);
    printf("\nCount of 5's: %d",c5);
    printf("\nCount of 6's: %d",c6);
    printf("\nCount of 7's: %d",c7);
    printf("\nCount of 8's: %d",c8);
    printf("\nCount of 9's: %d",c9);
    return 0;
}