#include<stdio.h>
#include<string.h>
int main(){
    // int l = strlen(name);
    // printf("%d\n",l);
    // char rev_name[30];
    // // rev_name = name;
    // strcpy(rev_name,name);
    // puts(strrev(rev_name));
    char name[30] = "Chandramukhi Chakraborty";
    int count_vol = 0;
    int count_cons = 0;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='a' || name[i]=='A' || name[i]=='E' || name[i]=='e'|| name[i]=='I' || name[i]=='i'|| name[i]=='O' || name[i]=='o'|| name[i]=='U' || name[i]=='u'){
            count_vol++;
        }
        else{
            count_cons++;
        }
    }
    printf("Count of Vol: %d\nCount of cons: %d",count_vol,count_cons);
    return 0;
}