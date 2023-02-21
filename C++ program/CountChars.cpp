#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char c[10];
    cout<<"Enter a word: ";
    cin>>c;
    int l = strlen(c);
    int alpha_cnt=0;
    int digit_cnt=0;
    int other_cnt=0;
    for(int i=0;i<l;i++){
        if((c[i]>='a' and c[i]<='z') or (c[i]>='A' and c[i]<='Z')){
            alpha_cnt++;
        }
        else if(c[i]>='0' and c[i]<='9'){
            digit_cnt++;
        }
        else{
            other_cnt++;
        }
    }
    cout<<"Number of alphabets: "<<alpha_cnt<<endl;
    cout<<"Number of digit: "<<digit_cnt<<endl;
    cout<<"Number of other characters: "<<other_cnt<<endl;
    return 0;
}