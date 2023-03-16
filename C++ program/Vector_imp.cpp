#include<iostream>
using namespace std;
//int a = 10
template<typename T>
class Vector{
    //data members
    T *arr;
    int curr_size;
    int max_cap;
    //method,const, destructor
public:
    //constructor
    Vector(){
        curr_size = 0;
        max_cap = 1;
        arr = new T[max_cap];
    }
    //methods
    void push_back(T data){
        if(curr_size==max_cap){//doubling case
            //creating new array
            T *oldArr = arr;
            max_cap = 2*max_cap;
            arr = new T[max_cap];
            //coping old values into new array
            for(int i=0;i<curr_size;i++){
                arr[i] = oldArr[i];
            }
            //delete old array
            delete [] oldArr;
            //pushing new value
            arr[curr_size] = data;
            curr_size++;
        }
        else{
            //normal case
            arr[curr_size] = data;
            curr_size++;
        }
    }
    void pop_back(){
        if(curr_size>0){
            curr_size--;
        }
    }
    int size(){
        return curr_size;
    }
    int capacity(){
        return max_cap;
    }
    T get(int i){
        return arr[i];
    }
    T operator[](int i){//operator overloading
        return arr[i];
    }
};
int main(){
    Vector<char> v;
    v.push_back('c');
    v.push_back('h');
    v.push_back('a');
    v.push_back('r');
    v.push_back('.');
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}