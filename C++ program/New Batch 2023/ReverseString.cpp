#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string word = "Apple";
    cout<<word<<endl;
    // reverse(word.begin(),word.end());

    // string rev = "";
    // for(int i=word.length()-1;i>=0;i--){
    //     rev += word[i];
    // }
    // word = rev;

    for(int i=0, j=word.length()-1 ; i<j ; i++,j--){
        swap(word[i],word[j]);
    }

    cout<<word<<endl;
    return 0;
}