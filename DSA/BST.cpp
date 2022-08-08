#include<iostream>
#include<vector>
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
Node* findMin(Node* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}
Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key>root->data){
        root->right = remove(root->right,key);
    }
    else if(key<root->data){
        root->left = remove(root->left,key);
    }
    else{
        //leaf
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        else if(root->left==NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        //2 children
        else{
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = remove(root->right,temp->data);

        }
    }
}
void printRange(Node* root,int k1,int k2){
    if(root==NULL){
        return;
    }
    if(root->data>=k1 and root->data<=k2){
        printRange(root->left,k1,k2);
        cout<<root->data<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->data<k1){
        printRange(root->right,k1,k2);
    }
    else if(root->data>k2){
        printRange(root->left,k1,k2);
    }
}
void printPath(Node* root){
    static vector<int> v;
    if(root==NULL){
        //null node
        return;
    }
    if(root->left==NULL and root->right==NULL){
        //leaf node
        for(int x:v){
            cout<<x<<"->";
        }
        cout<<root->data<<endl;
        return;
    }
    v.push_back(root->data);
    printPath(root->left);
    printPath(root->right);
    v.pop_back();
    return;
}
int main(){
    int arr[]={5,7,8,3,2,4};
    Node* root=NULL;
    for(int x:arr){
        root = insertNode(root,x);
    }
    printInorder(root);
    cout<<endl;
    printPath(root);
    return 0;
}