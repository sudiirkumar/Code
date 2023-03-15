template<typename T>
class Vector{
    T *arr;
    int curr_size;
    int max_size;

public:
    Vector(){
        curr_size = 0;
        max_size = 1;
        arr = new T[max_size];
    }
    void push_back(T data){
        if(curr_size<max_size){
            //simple pushing
            arr[curr_size] = data;
            curr_size++;
        }
        else{
            T *oldArr = arr;
            max_size = 2*max_size;
            arr = new T[max_size];
            for(int i=0;i<curr_size;i++){
                arr[i] = oldArr[i];
            }
            delete [] oldArr;
            arr[curr_size] = data;
            curr_size++;
        }
    }
    void pop_back(){
        if(curr_size>0)
            curr_size--;
    }
    int size(){
        return curr_size;
    }
    int capacity(){
        return max_size;
    }
    T front(){
        return arr[0];
    }
    T back(){
        return arr[curr_size-1];
    }
    bool isEmpty(){
        return curr_size==0;
    }
    T get(int i){
        return arr[i];
    }
    T operator[](int i){
        return arr[i];
    }
    ~Vector(){
        delete [] arr;
    }
};