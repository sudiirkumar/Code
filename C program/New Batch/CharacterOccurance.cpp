#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<climits>
int main(){
    char str[100];
    int cnt[26] = {0};
    printf("Enter an string: ");
    gets(str);
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    int count=0;
    printf("Character occurance index: \n");
    for(int i=0;i<strlen(str);i++){
        cnt[int(toupper(str[i])-'A')]++;
        if(str[i]==ch){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nNumber of occurance: %d",count);
    int maxm = INT_MIN;
    int maxm_idx=0;
    for(int i=0;i<26;i++){
        if(maxm<cnt[i]){
            maxm = cnt[i];
            maxm_idx = i;
        }
        printf("\nNumber of %c : %d",char('A'+i),cnt[i]);
    }
    printf("\nMaxmimum occurence: %c",char('A'+maxm_idx));
    printf("\nNumber of occurence: %d",maxm);
    return 0;
}