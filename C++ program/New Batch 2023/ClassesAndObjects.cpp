#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    string standard;

    Student(string new_name,int new_roll,string new_class){//constructor
        name = new_name;
        roll = new_roll;
        standard = new_class;
        cout<<"New student added"<<endl;
    }
    ~Student(){//Destructor
        cout<<"Student deleted"<<endl;
    }
    void printDetails(){//method
        cout<<"\n\nName: "<<name;
        cout<<"\nRoll: "<<roll;
        cout<<"\nClass: "<<standard;
    }
};
int main(){
    int num;
    Student new_student = Student("Aman",1,"BCA 1");//object
    //Init values
    // new_student.name = "Aman";
    // new_student.roll = 1;
    // new_student.standard = "BCA 1";
    //Access values
    // cout<<"Name: "<<new_student.name;
    // cout<<"\nRoll: "<<new_student.roll;
    // cout<<"\nClass: "<<new_student.standard;
    new_student.printDetails();

    Student st1 = Student("Raman",2,"BCA 2");
    // st1.name = "Raman";
    // st1.roll = 2;
    // st1.standard = "BCA 2";
    
    // cout<<"\nName: "<<st1.name;
    // cout<<"\nRoll: "<<st1.roll;
    // cout<<"\nClass: "<<st1.standard;
    st1.printDetails();
    return 0;
}