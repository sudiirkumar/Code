#include <bits/stdc++.h>
using namespace std;
class Graph{
	list<int> *l;
	int vertices;
public:
	Graph(int v){
		vertices = v;
		l = new list<int>[vertices];
	}
	void insert(int i,int j){
		l[i].push_back(j);
		l[j].push_back(i);
	}
	void print(){
		for(int i=0;i<vertices;i++){
			cout<<i<<"-->";
			for(int value : l[i]){
				cout<<value<<" ";
			}
			cout<<endl;
		}
	}
	void bfs(int source){
		queue<int> q;
		bool *isVisited = new bool[vertices]{0}; 

		isVisited[source] = true;
		q.push(source);
		while(!q.empty()){
			int data = q.front();
			q.pop();
			for(int neighbours : l[data]){
				if(!isVisited[neighbours]){
					q.push(neighbours);
					isVisited[neighbours] = true;
				}
			}
			cout<<data<<" ";
		}
	}
	void dfs(int src){
        static vector<bool> vis(vertices,false);
        vis[src]=true;
        cout<<src<<" ";
        for(auto ngbr:l[src]){
            if(!vis[ngbr]){
                dfs(ngbr);
            }
        }
        return;
    }
};
int main(){
	Graph g(5);
	g.insert(0,1);
	g.insert(0,2);
	g.insert(0,3);
	g.insert(1,3);
	g.insert(1,4);
	g.insert(2,3);

	g.bfs(0);
	cout<<endl;
	g.dfs(0);
	return 0;
}