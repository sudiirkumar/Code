#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter day number: ";
    cin>>num;
    if(num==0){
        cout<<"Sunday"<<endl;
    }
    else if(num==1){
        cout<<"Monday"<<endl;
    }
    else if(num==2){
        cout<<"Tuesday"<<endl;
    }
    else if(num==3){
        cout<<"Wednesday"<<endl;
    }
    else if(num==4){
        cout<<"Thursday"<<endl;
    }
    else if(num==5){
        cout<<"Friday"<<endl;
    }
    else if(num==6){
        cout<<"Saturday"<<endl;
    }
    else{
        cout<<"Wrong input"<<endl;
    }
    return 0;
}