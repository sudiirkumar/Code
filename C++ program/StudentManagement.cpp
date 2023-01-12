#include<iostream>
using namespace std;

class Student{
    string fname;
    string lname;
    int roll;
    int cgpa;
    string course;
public:
    //getter and setter
    void setFname(string fname){
        this->fname = fname;
    }
    string getFname(){
        return fname;
    }
    void setLname(string lname){
        this->lname = lname;
    }
    string getLname(){
        return lname;
    }
    void setRoll(int roll){
        this->roll = roll;
    }
    int getRoll(){
        return roll;
    }
    void setCGPA(int cgpa){
        this->cgpa = cgpa;
    }
    int getCGPA(){
        return cgpa;
    }
    void setCourse(string course){
        this->course = course;
    }
    string getCourse(){
        return course;
    }
    //methods
    void addStudent(){
        cout<<"\nEnter first name: ";
        cin>>fname;
        cout<<"\nEnter last name: ";
        cin>>lname;
        cout<<"\nEnter roll no.: ";
        cin>>roll; 
        cout<<"\nEnter CGPA: ";
        cin>>cgpa;
        cout<<"\nEnter course: ";
        cin>>course;
    }
    void printDetails(){
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }  
};
int main(){
    Student s1;
    s1.addStudent();
    s1.printDetails();

    Student s2;
    s2.addStudent();
    s2.printDetails();
    return 0;
}