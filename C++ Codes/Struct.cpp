#include<iostream>
using namespace std;
struct Cube
{
    int a;
    Cube(int a){
        this->a = a;
    }
    void volume(){
        cout<<"Volume : "<<a*a*a<<endl;
    }
};
int main(){
    struct Cube c = Cube(2);
    c.volume();
    return 0;
}