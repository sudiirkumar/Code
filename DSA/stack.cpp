#include<iostream>
#include"stackV.h"
using namespace std;
int main(){
    Stack<char> s;
    s.push('o');
    s.push('l');
    s.push('l');
    s.push('e');
    s.push('h');


    while (!s.isEmpty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
    
}