#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    static string schoolName;

    Student(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
};
string Student::schoolName = "School";

int main(){
    
    Student s1("A",1);
    Student s2("B",2);

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.schoolName<<endl;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.schoolName<<endl;
    return 0;
}