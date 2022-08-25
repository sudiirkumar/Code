#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int> v;
    bool isMin;
    void heapify(int i){
        int left = 2*i;
        int right = 2*i+1;
        int minIdx = i;
        if(right<v.size() and compare(v[right],v[minIdx])){
            minIdx = right;
        }
        if(left<v.size() and compare(v[left],v[minIdx])){
            minIdx = left;
        }
        if(minIdx!=i){
            swap(v[minIdx],v[i]);
            heapify(minIdx);
        }
    }
    bool compare(int a,int b){
        if(isMin){
            return a<b;
        }
        return a>b;
    }

    public:
        Heap(int defaul_size=5,bool isMin=false){
            v.reserve(defaul_size);
            v.push_back(-1);
            this->isMin = isMin;
        }

        void push(int data){
            v.push_back(data);

            int idx = v.size()-1;
            int parent = idx/2;
            while(idx>1 and compare(v[idx],v[parent])){
                swap(v[parent],v[idx]);
                idx = parent;
                parent /= 2;
            }
        }
        int get(){
            return v[1];
        }
        bool empty(){
            return v.size()==1;
        }
        void pop(){
            //1.swap last and first and pop the last(minimum number)
            int idx = v.size()-1;
            swap(v[1],v[idx]);
            v.pop_back();
            //2.correct the heap
            heapify(1);
        }
};
int main(){
    Heap h(10,true);
    int arr[]={21,23,12,22,3,2,10};
    for(int x:arr){
        h.push(x);
    }
    while (!h.empty())
    {
        cout<<h.get()<<endl;
        h.pop();
    }
    return 0;
}