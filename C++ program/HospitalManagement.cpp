#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
class Patient{
    //data members
    string name;
    unsigned short int age;
    bool isFullpaid;
    unsigned int fees;
    string department;
public:
    Patient(){}//default constructor
    Patient(string name, unsigned short int age,string department,int fees){//parametrised constructor
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
        cout<<endl;
        cout<<"Name of patient: "<<name<<endl;
        cout<<"Age of patient: "<<age<<endl;
        cout<<"Department: "<<department<<endl;
    }
    string getName(){
        return name;
    }
    unsigned short int getAge(){
        return age;
    }
    unsigned int getFee(){
        return fees;
    }
};
class Doctor{
    string name;
    string department;
public:
    Doctor(){}
    Doctor(string name,string department){
        this->name = name;
        this->department = department;
    }
    void printDetails(){
        cout<<"Name: "<<name;
        cout<<"\tDepartment: "<<department<<endl;
    }
    string getName(){
        return name;
    }
    string getDepartment(){
        return department;
    }
};
class Hospital{
    vector<Patient> patient;
    vector<Doctor> doctor;
public:
    void addPatient(string name, unsigned short int age, string department, unsigned int fees){
        Patient p(name,age,department,fees);
        patient.push_back(p);
    }
    bool dischargePatient(string name,unsigned short int age){
        for(int i=0;i<patient.size();i++){
            if(patient[i].getAge()==age and patient[i].getName()==name and patient[i].getFee()==0){
                patient.erase(patient.begin()+i);
                return true;
            }
        }
        return false;
    }
    int noOfPatient(){
        return patient.size();
    }
    void addDoc(string name,string department){
        Doctor d(name,department);
        doctor.push_back(d);
    }
    bool removeDocs(string name){
        for(int i=0;i<doctor.size();i++){
            if(doctor[i].getName()==name){
                doctor.erase(doctor.begin()+i);
                return true;
            }
        }
        return false;
    }
    int noOfDocs(){
        return doctor.size();
    }
    void printDoctors(){
        cout<<endl<<"List of Doctors: "<<endl;
        for(Doctor d : doctor){
            d.printDetails();
        }
    }
    void printPatients(){
        cout<<endl<<"List of patients: "<<endl;
        for(Patient p : patient){
            p.printDetails();
        }
    }
    void payFee(string name,int amount){
        for(int i=0;i<patient.size();i++){
            if(patient[i].getName()==name){
                patient[i].payFee(amount);
            }
        }
    }
    void checkFees(string name){
        for(int i=0;i<patient.size();i++){
            if(patient[i].getName()==name){
                if(patient[i].getFee()==0){
                    cout<<"No fees due."<<endl;
                }
                else{
                    cout<<"Fee due: "<<patient[i].getFee()<<endl;
                }
            }
        }
    }
};
int main(){
    Hospital hospital;
    char ch;
    do{
        system("cls");
        cout<<endl<<"WELCOME TO HOSPITAL MANAGEMENT SYSTEM"<<endl;
        cout<<"1. Add new patient"<<endl;
        cout<<"2. Discharge a patient"<<endl;
        cout<<"3. Find details of patient"<<endl;
        cout<<"4. Patient fee payment"<<endl;
        cout<<"5. Patient fee check"<<endl;
        cout<<"6. Number of patients"<<endl;
        cout<<"7. Show all patient"<<endl;
        cout<<endl;
        cout<<"8. Add new doctor"<<endl;
        cout<<"9. Remove a doctor"<<endl;
        cout<<"10. Find details of doctor"<<endl;
        cout<<"11. Number of doctors"<<endl;
        cout<<"0. Exit"<<endl;
        int choice;
        cout<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 0: exit(0);
        }
        getch();
    }
    while(ch!='n' || ch!='N');
    return 0;
}