#include<iostream>
using namespace std;
class User{
protected:
    string userName;
    int userBalance;
    friend void printDetails(User u);
public:
    User(string name){
        this->userName = name;
        this->userBalance = 0;
    }
    User(){}
    void printDetails(){
        cout<<"Name: "<<this->userName<<endl;
        cout<<"Balance: "<<this->userBalance<<endl;
    }
};
void printDetails(User u){
    cout<<u.userName<<endl;
    cout<<u.userBalance<<endl;

}
class PrimeUser : public User{
    string validity;
    friend void printValidity(PrimeUser p);
public:
    PrimeUser(string userName,string validity){
        this->userName = userName;
        this->validity = validity;
        this->userBalance = 0;
    }
};
void printValidity(PrimeUser p){
    cout<<p.validity<<endl;
}
int main(){
    User u1("Aman");
    PrimeUser p1("Raman","12/12/2012");
    u1.printDetails();
    p1.printDetails();
    printDetails(u1);
    return 0;
}