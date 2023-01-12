#include<iostream>
using namespace std;
class Student{
    // Data members
    private://optional
        string name;
        int roll;
        string adhar;
    //getter and setter methods
    public://access modifiers
        string getName(){
            return name;
        }
        void setName(string n){
            name = n;
        }
        int getRoll(){
            return roll;
        }
        void setRoll(int r){
            roll = r;
        }
        string getAdhar(){
            return adhar;
        }
        void setAdhar(string a){
            adhar = a;
        }
};
int main(){
    Student s1;//object creation
    s1.setName("Aman Tiwary");
    s1.setRoll(12);
    s1.setAdhar("123456781234");

    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Roll: "<<s1.getRoll()<<endl;
    cout<<"Adhar: "<<s1.getAdhar()<<endl;

    Student s2;
    s2.setName("Sanjana");
    s2.setRoll(121);
    s2.setAdhar("000012340000");

    cout<<"\nName: "<<s2.getName()<<endl;
    cout<<"Roll: "<<s2.getRoll()<<endl;
    cout<<"Adhar: "<<s2.getAdhar()<<endl;
    return 0;
}