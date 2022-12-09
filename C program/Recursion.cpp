#include<stdio.h>
void printNum(int i){//i=1 2 3
    if(i>10)
        return;
    printf("%d\n",i);
    i++;
    printNum(i);
}
main(){
    printNum(1);
}