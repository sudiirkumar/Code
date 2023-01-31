#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name1,name2;
    cin>>name1;
    cout<<"Hello\n"<<name1;
    cout<<"  ";
    getline(cin,name2);
    cout<<"Hello"<<name2;
    return 0;
}
