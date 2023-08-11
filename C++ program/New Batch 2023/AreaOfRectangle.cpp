#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    int area = length * breadth;
    cout<<"Area of rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<area<<endl;
    int perimeter = 2*(length+breadth);
    cout<<"Perimeter of rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<perimeter<<endl;
    return 0;
}