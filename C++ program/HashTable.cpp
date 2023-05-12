#include<iostream>
using namespace std;
class HashTable;
class Node{
public:
    string key;
    int value;
    Node *next;
    Node(string k,int val){
        key = k;
        value = val;
        this->next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};
class HashTable{
    Node** table;
    int curr_size;
    int table_size;

    int hashFunc(string key){
        int idx = 0;
        int power = 1;
        for(int i=0;i<key.length();i++){
            idx = (idx + key[i]*power)%table_size;
            power = (power * 29)%table_size;
        }
        return idx;
    }
    void rehash(){
        Node **oldTable = table;
        int oldTableSize = table_size;
        curr_size = 0;
        table_size = table_size*2 + 1;
        table = new Node*[table_size]; 
        
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }

        for(int i=0;i<oldTableSize;i++){
            Node *temp = oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);

                temp = temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete [] oldTable;
    }
public:
    HashTable(){
        curr_size = 0;
        table_size = 7;
        table = new Node*[table_size];
        //initiale every index of the table to NULL
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }
    }
    void insert(string key,int value){
        Node *new_node = new Node(key,value);
        int idx = hashFunc(key);
        //insert new node at the head of LL
        new_node->next = table[idx];
        table[idx] = new_node;
        curr_size++;
        float load_factor = curr_size/table_size;
        if(load_factor>0.7){
            rehash();
        }
    }
    void print(){
        for(int i=0;i<table_size;i++){
            Node *temp = table[i];
            cout<<i<<" ";
            while(temp!=NULL){
                cout<<"--> ["<<temp->key<<" -> "<<temp->value<<"]";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    bool containsKey(string key){
        int idx = hashFunc(key);
        Node *temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    int search(string key){
        int idx = hashFunc(key);
        Node *temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return temp->value;
            }
            temp = temp->next;
        }
        return -1;
    }
};
int main(){
    HashTable h;
    h.insert("Apple",10);
    h.insert("Guava",20);
    h.insert("Mango",40);
    h.insert("Watermelon",30);
    h.insert("Litchi",50);
    h.insert("Kiwi",20);
    h.insert("Orange",70);
    h.insert("Strawberry",100);
    h.insert("Banana",25);
    h.insert("Muskmelon",60);

    h.print();
    return 0;
}