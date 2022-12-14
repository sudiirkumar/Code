#include<iostream>
#include<cmath>
int main(){
    int num;
    int p;
    std::cout<<"Enter a number and its power: ";
    std::cin>>num>>p;
    std::cout<<pow(num,p);
    return 0;
}