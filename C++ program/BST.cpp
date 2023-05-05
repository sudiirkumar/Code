#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node* build(Node *root, int value){
    if(root==NULL){
        Node *new_node = new Node(value);
        return new_node;
    }
    if(value<root->data){
        root->left = build(root->left,value);
    }
    else{
        root->right = build(root->right,value);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(Node *root, int value,int level){
    if(root==NULL){
        return false;
    }
    if(root->data==value){
        cout<<"Level = "<<level;
        return true;
    }
    bool temp;
    if(root->data<value){
        temp = search(root->right,value,level+1);
    }
    else{
        temp = search(root->left,value,level+1);
    }
    return temp;
}
int main(){
    Node *root = NULL;
    int arr[] = {6,3,9,1,4,7,10};
    for(int x : arr){
        root = build(root,x);
    }
    inorder(root);
    int key;
    cin>>key;
    if(search(root,key,1)){
        cout<<"\nYes";
    }
    else{
        cout<<"\nNo";
    }
    return 0;
}