#include<iostream>
using namespace std;
// int pow(int a,int b){
//     return a+b;
// }
// int sqrt(int a){
//     return a*a;
// }
// int main(){
//     int a = 2,b=3;
//     cout<<pow(2,3)<<endl;
//     cout<<sqrt(a)<<endl;
//     return 0;
// }
class Student{
    public:
        string name;
        int roll;
    void printDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
class SeniorStudent : public Student{
    public:
        int standard;
    void printDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Class: "<<standard<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "A";
    s1.roll = 1;
    s1.printDetails();
    
    SeniorStudent s2;
    s2.name = "B";
    s2.roll = 2;
    s2.standard = 11;
    s2.printDetails();
    return 0;
}