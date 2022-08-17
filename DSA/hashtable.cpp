#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
        string key;
        T value;
        Node* next;

        Node(string key,T value){
            this->key = key;
            this->value = value;
            next = NULL;
        }
        ~Node(){
            if(next!=NULL){
                delete next;
            }
        }
};
template<typename T>
class HashTable{
    Node<T>** table;
    int cs;
    int ts;
    int hashFn(string key){
        int idx=0;
        int power=1;
        for(auto ch:key){
            idx = idx+(ch*power)%ts;
            power = (power*29)%ts;
        }
        return idx;
    }
    void rehash(){
        Node<T>** oldTable = table;
        int oldSize = ts;

        cs=0; 
        ts = 2*ts+1;
        table = new Node<T>*[ts];

        for (int i = 0; i < ts; i++)
        {
            table[i]=NULL;
        }
        for(int i=0;i<oldSize;i++){
            Node<T>* temp = oldTable[i];
            while(temp!=NULL){
                string key = temp->key;
                T value = temp->value;
                insert(key,value);
                temp = temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete [] oldTable;
    }
    public:
        HashTable(int default_size=7){
            cs=0;
            ts=default_size;
            table = new Node<T>*[ts];

            for(int i=0;i<ts;i++){
                table[i] = NULL;
            }
        }
        void insert(string key,T value){
            int idx = hashFn(key);
            Node<T>* n = new Node<T>(key,value);
            n->next = table[idx];
            table[idx] = n;
            cs++;

            float load_factor = cs/float(ts);
            if(load_factor>0.7){
                rehash();
            }
        }
        void print(){
            for(int i=0;i<ts;i++){
                cout<<"Bucket "<<i<<"->";
                Node<T>* temp = table[i];
                while(temp!=NULL){
                    cout<<temp->key<<"->";
                    temp = temp->next;
                }
                cout<<"NULL"<<endl;
            }
        }
        bool isPresent(string key){
            int idx = hashFn(key);
            Node<T>* temp = table[idx];
            while(temp!=NULL){
                if(key==temp->key){
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
        T* search(string key){
            if (isPresent(key))
            {
                int idx = hashFn(key);
                Node<T>* temp = table[idx];
                while(temp!=NULL){
                    if(key==temp->key){
                        return &temp->value;
                    }
                    temp = temp->next;
                } 
            }
            return NULL;
        }
        void erase(string key){
           int idx = hashFn(key);
           if(isPresent(key)){
                Node<T>* temp = table[idx];
                if(temp->key==key){
                    Node<T>* del = temp;
                    table[idx] = del->next;
                    del->next = NULL;
                    delete del;
                }
                else{
                    while(temp!=NULL){
                        if(temp->next->key==key){
                            break;
                        }
                        temp = temp->next;
                    }
                    Node<T>* del = temp->next;
                    temp->next = del->next;
                    del->next = NULL;
                    delete del;
                }
           } 
        }
        T& operator[](string key){
            T* keyAdd = search(key);
            if(keyAdd==NULL){
                T object;
                insert(key,object);
                keyAdd = search(key);
            }
            return *keyAdd;
        }
};
int main(){
    HashTable<int> table;
    table.insert("A",10);
    table.insert("B",20);
    table.insert("C",30);
    table.insert("D",40);
    table.insert("E",50);
    table.insert("F",60);
    table.insert("G",70);
    table["H"] = 80;
    cout<<table["H"]<<endl;
    table.print();
    table["H"] += 10;
    cout<<table["H"]<<endl;
    return 0;
}