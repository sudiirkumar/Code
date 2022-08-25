#include<bits/stdc++.h>
using namespace std;
class Node{
    string name;
public:
    list<string> nbrs;
    Node(string name){
        this->name = name;
    }
};
class Graph{
    unordered_map<string,Node*> m;
public:
    Graph(vector<string> nodes){
        for(auto node:nodes){
            m[node] = new Node(node);
        }
    }
    void addEdge(string n1,string n2,bool undir=false){
        m[n1]->nbrs.push_back(n2);
        if(undir){
            m[n2]->nbrs.push_back(n1);
        }
    }
    void print(){
        for(auto node:m){
            string name = node.first;
            Node* n = node.second;
            cout<<name<<"-->";
            for(auto nodes:n->nbrs){
                cout<<nodes<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    vector<string> c = {"Gaya","Patna","Ranchi","Bangalore"};
    Graph g(c);

    g.addEdge(c[0],c[1]);
    g.addEdge(c[1],c[2]);
    g.addEdge(c[0],c[3]);
    g.addEdge(c[3],c[2]);

    g.print();

    return 0;
}