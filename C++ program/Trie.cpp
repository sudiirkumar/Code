#include<bits/stdc++.h>
using namespace std;
class Node{
	char ch;
	unordered_map<char,Node*> map;
	bool isTerminal;
public:
	friend class Trie;
	Node(char ch){
		this->ch = ch;
		isTerminal = false;
	}
};
class Trie{
	Node* root;
public:
	Trie(){
		root = new Node('\0');
	}
	void insert(string value){
		Node* temp = root;
		for(char c : value){
			if(temp->map.find(c)==temp->map.end()){
				//not found
				Node *new_node = new Node(c);
				temp->map[c] = new_node;
			}
			temp = temp->map[c];
		}
		temp->isTerminal = true;
	}
	bool search(string value){
		Node *temp = root;
		for(char c : value){
			if(temp->map.find(c)==temp->map.end()){
				return false;
			}
			temp = temp->map[c];
		}
		if(temp->isTerminal==true){
			return true;
		}
		return false;
	}
};
int main(){
	Trie t;
	t.insert("Apple");
	t.insert("App");
	cout<<t.search("App")<<endl;
	return 0;
}