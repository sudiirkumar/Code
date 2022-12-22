#include<iostream>
using namespace std;
int main(){
    unsigned short int a,b,c;
    cout<<"Enter 3 sides of triangle: ";
    cin>>a>>b>>c;
    if(a>0 and b>0 && c>0){
        if(a+b>c and b+c>a and c+a>b){
            cout<<"Valid triangle"<<endl;
            if(a==b and b==c){//equilateral
                cout<<"Equilateral"<<endl;
            }
            else if(a==b or b==c or a==c){//isosceles
                cout<<"Isosceles"<<endl;
            }
            else{//scalene
                cout<<"Scalene"<<endl;
            }
        }
        else{
            cout<<"Not valid"<<endl;
        }
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}