#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int> heap;

    void heapify(int i){
        int left = 2*i;
        int right = (2*i)+1;
        int maxIdx = i;
        if(right<heap.size() and heap[right]>heap[maxIdx]){
            maxIdx = right;
        }
        if(left<heap.size() and heap[left]>heap[maxIdx]){
            maxIdx = left;
        }
        if(maxIdx!=i){
            swap(heap[maxIdx],heap[i]);
            heapify(maxIdx);
        }
    }
public:
    Heap(){
        heap.push_back(-1);
    }
    void push(int data){
        if(heap.size()==1){
            heap.push_back(data);
            return;
        }
        heap.push_back(data);
        int idx = heap.size() - 1;
        int parent = idx/2;
        while(idx>1 && parent>0){
            if(heap[parent]<heap[idx]){
                swap(heap[parent],heap[idx]);
            }
            idx = parent;
            parent = idx/2;
        }
    }
    int get_max(){
        return heap[1];
    }
    bool empty(){
        return heap.size()==1;
    }
    void pop(){
        int last = heap.size()-1;
        swap(heap[1],heap[last]);
        heap.pop_back();
        heapify(1);
    }
};
int main(){
    Heap h;
    int arr[] = {12,34,54,15,10,123,23,233,32,13,67};
    for(int x : arr){
        h.push(x);
    }
    while(!h.empty()){
        cout<<h.get_max()<<" ";
        h.pop();
    }
    return 0;
}