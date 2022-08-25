#include<bits/stdc++.h>
using namespace std;
class Node{
    char ch;
public:
    bool isTerminal;
    unordered_map<char,Node*> m;
    Node(char d){
        ch = d;
        isTerminal = false;
    }
};
class Trie{
    Node* root;
public:
    Trie(){
        root=new Node('\0');
    }
    //insetion
    void insert(string word){
        Node* temp = root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                Node* n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }
    //searching
    bool search(string word){
        Node* temp=root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};
int main(){
    Trie t;
    string word[]={"hello","abc","mango","aeroplane"};
    for(string x:word){
        t.insert(x);
    }
    string key[]={"abc","man","hello","ab","aero","mango"};
    for(string x:key){
        cout<<t.search(x)<<endl;
    }
    return 0;
}