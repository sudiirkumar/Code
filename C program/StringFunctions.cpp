#include<stdio.h>
#include<string.h>
int main(){
    char name[30] = "Chandramukhi Chakraborty";
    // int count_vol = 0;
    // int count_cons = 0;
    // for(int i=0;name[i]!='\0';i++){
    //     if(name[i]=='a' || name[i]=='A' || name[i]=='E' || name[i]=='e'|| name[i]=='I' || name[i]=='i'|| name[i]=='O' || name[i]=='o'|| name[i]=='U' || name[i]=='u'){
    //         count_vol++;
    //     }
    //     else{
    //         count_cons++;
    //     }
    // }
    // printf("Count of Vol: %d\nCount of cons: %d",count_vol,count_cons);
    printf("Lowercase: %s\n",strlwr(name));
    printf("Uppercase: %s",strupr(name));
    return 0;
}