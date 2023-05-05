#include<iostream>
#include<queue>
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
Node* buildTree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node *new_node = new Node(data);
    new_node->left = buildTree();
    new_node->right = buildTree();
    return new_node;
}
void preOrder(Node *root){
    if(root==NULL){
        cout<<"N ";
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root){
    if(root==NULL){
        cout<<"N ";
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(Node *root){
    if(root==NULL){
        cout<<"N ";
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        if(temp==NULL){
            cout<<"\n";
            q.pop();
            if(!q.empty())
                q.push(NULL);
        }
        else{
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            cout<<temp->data<<" ";
            q.pop();
        }
    }
}
int main(){
    Node *root = buildTree();
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    return 0;
}