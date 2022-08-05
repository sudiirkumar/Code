#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            right = left = NULL;
        }
};
Node* insertNode(Node* root,int d){
    if(root==NULL){
        return new Node(d);
    }
    if(d>root->data){
        root->right = insertNode(root->right,d);
    }
    else{
        root->left = insertNode(root->left,d);
    }
    return root;
}
void printInorder(Node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
bool search(Node* root,int key){
    //base case
    if(root==NULL){
        return false;
    }
    //rec case
    if(key==root->data){
        return true;
    }
    if(key>root->data){
        return search(root->right,key);
    }
    if(key<root->data){
        return search(root->left,key);
    }
}
int main(){
    int arr[]={3,2,5,3,4,1,7};
    Node* root=NULL;
    for(int x:arr){
        root = insertNode(root,x);
    }
    printInorder(root);
    cout<<endl;
    int key;
    cin>>key;
    cout<<search(root,key);
    return 0;
}