#include<iostream>
using namespace std;
class Patient{
    string name;
    unsigned short int age;
    bool isFullpaid;
    unsigned int fees;
    string department;
public:
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
    void printDetails(){
        cout<<"Name of doctor: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
    }
};
class Hospital{
    unsigned int noOfPatient;
    unsigned int noOfDocs;
public:
    void addPatient(){

    }
    void dischargePatient(){

    }
    void noOfPatient(){

    }
    void addDocs(){

    }
    void removeDocs(){

    }
    void noOfDocs(){

    }
    void searchPatient(){
        
    }
};
int main(){
    
    return 0;
}