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
class Contact{
    public:
        string fax_no,landline_no,phone_no;
    Contact(string fax_no,string landline_no,string phone_no){
        this->fax_no = fax_no;
        this->landline_no = landline_no;
        this->phone_no = phone_no;
    }
};
class Customer{
    private:
        Address *add;
        Contact *conc;
    public:
        string name;
        int id_no;
        string dob;
    Customer(string name,int id_no,string dob,Address *add,Contact *conc){
        this->name = name;
        this->id_no = id_no;
        this->dob = dob;
        this->add = add;
        this->conc = conc;
    }
    void disp(){
        cout<<"\n------------------CUSTOMER DETAILS-----------------\n";
        cout<<"\nName : "<<name<<"\nId Number : "<<id_no<<"\nDate of Birth : "<<dob;
        cout<<"\n\nCity : "<<add->city<<" "<<add->pin<<"\nState : "<<add->state<<"\nCountry : "<<add->country;
        cout<<"\n\nFax no : "<<conc->fax_no<<"\nLandline no : "<<conc->landline_no<<"\nPhone number : "<<conc->phone_no<<endl;
    }
};
int main(){
    Contact c = Contact("234534664","342542345","1324323152");
    Address a = Address("Gaya","Bihar","India",823421);
    Customer cust = Customer("Sudhir",646887,"07 Aug 2022",&a,&c);

    cust.disp();
    return 0;
}
