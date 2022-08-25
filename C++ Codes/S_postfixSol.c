#include<stdio.h>
#include<conio.h>
#include"stack.h"
int main(){
    stack s;
    s.top=-1;
    char input;
    int len;
    printf("\nEnter length of equation : ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        input = getche();
        if(input>='0' && input<='9'){
            push(input,&s);
        }
        else{
            if()
        }
    }
}