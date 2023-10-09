#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    string standard;
};
int main(){
    int num;
    Student new_student;//object
    //Init values
    new_student.name = "Aman";
    new_student.roll = 1;
    new_student.standard = "BCA 1";
    //Access values
    cout<<"Name: "<<new_student.name;
    cout<<"\nRoll: "<<new_student.roll;
    cout<<"\nClass: "<<new_student.standard;
    return 0;
}