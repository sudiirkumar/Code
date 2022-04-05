#include<iostream>
using namespace std;
class Rect{
    private:    
        int length;
    public:
        friend  int printLength(Rect);
};
int printLength(Rect b){
    b.length = 10;
    return b.length;
}
int main(){
    Rect b;
    cout<<"Length of box : "<<printLength(b)<<endl;
    return 0;
}