#include<iostream>
#include<algorithm>
using namespace std;
class Student{
    int roll;
    int marks;
    string name;
public:
    void setRoll(int roll){
        this->roll = roll;
    }
    int getRoll(){
        return roll;
    }

    void setMarks(int marks){
        this->marks = marks;
    }
    int getMarks(){
        return marks;
    }
    
    void setname(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    
};
bool helper(Student s1,Student s2){
    if(s1.getRoll()<s2.getRoll()){
        return true;
    }
    return false;
}
int main(){
    Student s[5];
    int roll;
    int marks;
    string name;
    for(int i=0;i<5;i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>name;
        s[i].setname(name);

        cout<<"Enter roll of student "<<i+1<<": ";
        cin>>roll;
        s[i].setRoll(roll);

        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks;
        s[i].setMarks(marks);
    }
    sort(s,s+5,helper);
    for(Student i:s){
        cout<<"Name: "<<i.getName()<<endl;
        cout<<"Roll: "<<i.getRoll()<<endl;
        cout<<"Marks: "<<i.getMarks()<<endl;
    }







    // int arr[] = {1,12,3,44,34,55,5};
    // float a[] = {1.2,3.2, 4,234,3.4};
    // string name[] = {"aman","dhaman","raman","chaman","pawan"};
    // bool isTrue[] = {true,false,true,false,true};
    // char ch[] = {'r','w','3'};
    // sort(arr,arr+7);
    // for(int x:arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(float x:a){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(string x:name){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(bool x:isTrue){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(char x:ch){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    return 0;
}