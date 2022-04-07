#include<iostream>
using namespace std;
class Address{
    public:
    string city,state,country;
    int pin;
    Address(string city,string  state,string country,int pin){
        this->city = city;
        this->state = state;
        this->country = country;
        this->pin = pin;
    }
};
class Student{
    Address *add;
    public:
    string name;
    int roll;
    Student(int roll,string name,Address *add){
        this->roll = roll;
        this->name = name;
        this->add = add;
    }
    void disp(){
        cout<<"\nName : "<<this->name<<"\nRoll : "<<this->roll<<"\nCity : "<<add->city<<" "<<add->pin;
        cout<<"\nState : "<<add->state<<"\nCountry : "<<add->country<<endl;
    }
};
int main(){
    Address a = Address("Gaya","Bihar","India",823002);
    Student s = Student(37,"Sudhir",&a);//Passing the object a into the parameter of Student constructor
    s.disp();
    return 0;
}