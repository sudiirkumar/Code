#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

Node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
void printPreorder(Node* root){//root->left->right
    if(root==NULL){
        cout<<-1<<" ";
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
void printInorder(Node* root){//left->root->right
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPostorder(Node* root){//left->right->root
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
void printLevelOrder(Node* root){//level-wise print
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode = q.front();
        if(currNode==NULL){
            cout<<"\n";
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }
        if(currNode->left!=NULL){
            q.push(currNode->left);
        }
        if(currNode->right!=NULL){
            q.push(currNode->right);
        }
        q.pop();
        cout<<currNode->data<<" ";
    }
}
Node* levelBuild(){
    int d;
    queue<Node*> q;
    cin>>d;
    Node* root = new Node(d);
    q.push(root);
    while(!q.empty()){
        cin>>d;
        if(d!=-1){
            q.front()->left = new Node(d);
            q.push(q.front()->left);
        }
        cin>>d;
        if(d!=-1){
            q.front()->right = new Node(d);
            q.push(q.front()->right);
        }
        q.pop();
    }
    return root;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return max(h1,h2) + 1;
}
//diameter time compl = n^2
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d2,d3));
}
//opt diameter time compl = n
pair<int,int> optDiameter(Node* root){//first = height,second = diameter
    pair<int,int> p;
    if(root==NULL){
        p.first = p.second = 0;
        return p;
    }
    pair<int,int> p1 = optDiameter(root->left);
    pair<int,int> p2 = optDiameter(root->right);
    p.first = max(p1.first,p2.first) + 1;
    int d1 = p1.first+p2.first;
    int d2 = p1.second;
    int d3 = p2.second;
    p.second = max(d1,max(d2,d3));
    return p;
}
int main(){
    Node* root=levelBuild();
    printLevelOrder(root);
    cout<<"\nHeight of tree is "<<height(root)<<endl;
    cout<<"Diameter is "<<optDiameter(root).second<<endl;
    return 0;
}