#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    switch(num){
        case 0: cout<<"Sunday"<<endl;
                break;
        case 1: cout<<"Monday"<<endl;
                break;
        case 2: cout<<"Tuesday"<<endl;
                break;
        case 3: cout<<"Wednesday"<<endl;
                break;
        case 4: cout<<"Thursday"<<endl;
                break;
        case 5: cout<<"Friday"<<endl;
                break;
        case 6: cout<<"Saturday"<<endl;
                break;
        default:cout<<"Wrong input"<<endl;
    }
    return 0;
}