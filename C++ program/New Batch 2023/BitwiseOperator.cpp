#include<iostream>
using namespace std;
int main(){
    int a = 12; // __1100 -> _11000 -> 110000 => 48
    int b = 5; //  0101 -> 0010 -> 0001 => 1
    cout<<(a&b)<<endl;//0100 => 4
    cout<<(a|b)<<endl;//1101 => 13
    cout<<(a^b)<<endl;//1001 => 9
    // Left shift = <<   =>   (n<<x) -> n*(2^x)
    // Right shift = >>  =>   (n>>x)  -> n/(2^x)
    // Complement = ~   =>  1 -> 0 and 0 -> 1
    cout<<(a<<2)<<endl;
    cout<<(b>>2)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    return 0;
}