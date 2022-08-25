//print the months of a year using enum
#include<iostream>
using namespace std;
enum Month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main(){
    Month m;
    m = Feb;
    cout<<"Month : "<<m+1;
    return 0;
}