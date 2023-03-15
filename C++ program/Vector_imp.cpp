#include<iostream>
using namespace std;
class Vector{
    //data members
    int *arr;
    int curr_size;
    int max_cap;
    //method,const, destructor
public:
    //constructor
    Vector(){
        curr_size = 0;
        max_cap = 1;
        arr = new int[max_cap];
    }
    //methods
    void push_back(int data){
        if(curr_size==max_cap){//doubling case
            //creating new array
            int *oldArr = arr;
            max_cap = 2*max_cap;
            arr = new int[max_cap];
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
    
};
int main(){
    
    return 0;
}