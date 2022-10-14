//1234  -> 4321  ->  1 2 3 4
#include<stdio.h>
int main(){
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  int digit;
  int rev=0;
  //reversing the number
  while(num!=0){
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  }
  //printing the digits of the reverse number
  while(rev!=0){
    digit = rev%10;
    // printf("%d ",digit);
    switch(digit)
    {
        case 0: printf("zero ");
        break;
        case 1: printf("one ");
        break;
        case 2: printf("two ");
        break;
        case 3: printf("three ");
        break;
        case 4: printf("four ");
        break;
        case 5: printf("five ");
        break;
        case 6: printf("six ");
        break;
        case 7: printf("seven ");
        break;
        case 8: printf("eight ");
        break;
        case 9: printf("nine ");
        break;
    }
    rev = rev/10;
  }
  return 0;
}