#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<name<<endl;
    // for(int i=0;i<name.length();i++){
    //     cout<<name[i]<<"\n";
    // }
    int count_vowel = 0;
    int count_cons = 0;
    for(char c : name){
        if((c>='A' and c<='Z') or (c>='a' and c<='z')){
            if(c=='A' or c=='E' or c=='O' or c=='I' or c=='U' or c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
                count_vowel++;
            else
                count_cons++;
        }
    }
    cout<<"Count of vowels: "<<count_vowel<<endl;
    cout<<"Count of consonants: "<<count_cons<<endl;
    return 0;
}