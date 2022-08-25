#include<iostream>
using namespace std;
string word[]={"Zero ","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine "};
void print(int n){
    if(n==0){
        return;
    }
    short int digit = n%10;
    print(n/10);
    cout<<word[digit];
}
int main(){
    int n;
    cin>>n;
    print(n);

    return 0;
}