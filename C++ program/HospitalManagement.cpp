#include<iostream>
using namespace std;
class Patient{
    //data members
    string name;
    unsigned short int age;
    bool isFullpaid;
    unsigned int fees;
    string department;
public:
    Patient(){

    }
    Patient(string name, unsigned short int age,string department,int fees){
        this->name = name;
        this->age = age;
        this->department = department;
        isFullpaid = false;
        this->fees = fees;
    }
    void payFee(int amount){
        if(isFullpaid){
            cout<<"Full fee is paid already!"<<endl;
            return;
        }
        if(fees<=amount){
            amount = amount-fees;
            fees = 0;
            isFullpaid = true;
            cout<<"Full payment is done."<<endl;
            cout<<"Remaining amount : "<<amount<<endl;
            return;
        }
        fees = fees - amount;
        cout<<"Payment of "<<amount<<" is done."<<endl;
        cout<<"Remaining fees: "<<fees<<endl;
    }
    void printDetails(){
        cout<<"Name of patient: "<<name<<endl;
        cout<<"Age of patient: "<<age<<endl;
        cout<<"Department: "<<department<<endl;
    }
};
class Doctor{
    string name;
    string department;
public:
    Doctor(){

    }
    Doctor(string name,string department){
        this->name = name;
        this->department = department;
    }
    void printDetails(){
        cout<<"Name of doctor: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
    }
};
class Hospital{
    unsigned int noOfPatient;
    unsigned int noOfDocs;
public:
    Hospital(){
        noOfDocs = 0;
        noOfPatient = 0;
    }
    Patient addPatient(string name, unsigned short int age, string department, unsigned int fees){
        Patient p(name,age,department,fees);
        noOfPatient++;
        return p;
    }
    void dischargePatient(){
        noOfPatient--;
    }
    unsigned int noOfPatient(){
        return noOfPatient;
    }
    Doctor addDocs(string name,string department){
        Doctor d(name,department);
        noOfDocs++;
        return d;
    }
    void removeDocs(){
        noOfDocs--;
    }
    unsigned int noOfDocs(){
        return noOfDocs;
    }
};
int main(){
    Hospital h;
    Patient p1 = h.addPatient("A",10,"Jaundice",500);
    p1.printDetails();
    return 0;
}