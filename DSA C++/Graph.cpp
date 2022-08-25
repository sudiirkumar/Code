#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list<int>* l;
public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int i,int j,bool isBidirec=false){
        l[i].push_back(j);
        if(isBidirec){
            l[j].push_back(i);
        }
    }
    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(int src){
        queue<int> q;
        vector<bool> vis(v,false);
        q.push(src);
        vis[src]=true;
        while(!q.empty()){
            int n = q.front();
            cout<<n<<" ";
            for(auto ngbr:l[n]){
                if(vis[ngbr]==false){
                    q.push(ngbr);
                    vis[ngbr]=true;
                }
            }
            q.pop();
        }
    }
    void dfs(int src){
        static vector<bool> vis(v,false);
        vis[src]=true;
        cout<<src<<" ";
        for(auto ngbr:l[src]){
            if(!vis[ngbr]){
                dfs(ngbr);
            }
        }
        return;
    }
    void topologicalSort(){
        //calculating indegree
        vector<int> indegree(v,0);
        for(int i=0;i<v;i++){
            for(auto ngbr:l[i]){
                indegree[ngbr]++;
            }
        }
        //push all node having 0 indegree
        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int curr = q.front();
            cout<<curr<<" ";
            for(auto ngbr:l[curr]){
                indegree[ngbr]--;
                if(indegree[ngbr]==0){
                    q.push(ngbr);
                }
            }
            q.pop();
        }
    }
};
int main(){
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);

    g.topologicalSort();
    return 0;
}