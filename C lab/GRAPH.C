#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<climits>
#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int topo[MAX];

void initGraph(){
	graph[0][1] = graph[1][0] = 1;
	graph[1][2] = graph[2][1] = 1;
	graph[0][2] = graph[2][0] = 1;
	graph[2][6] = graph[6][2] = 1;
	graph[1][3] = graph[3][1] = 1;
	graph[1][5] = graph[5][1] = 1;
	graph[3][5] = graph[5][3] = 1;
	graph[4][5] = graph[5][4] = 1;
	graph[4][6] = graph[6][4] = 1;
	graph[5][6] = graph[6][5] = 1;
}
void BFS(int start){
	int queue[MAX], front = 0, rear = 0;
	int i;
	int curr;

	for(i=0;i<MAX;i++)
		visited[i] = 0;

	queue[rear++] = start;
	visited[start] = 1;

	printf("\nBFS: \n");

	while(front<rear){
		curr = queue[front++];
		for(i=0;i<MAX;i++){
			if(graph[curr][i] == 1 && visited[i]==0){
				visited[i] = 1;
				queue[rear++] = i;
			}
		}
		printf("%d ",curr);
	}
	printf("\n");
}
void DFSUtil(int start){
	int i;
	visited[start] = 1;
	printf("%d ",start);
	for(i=0;i<MAX;i++){
		if(graph[start][i] == 1 && visited[i] == 0){
			DFSUtil(i);
		}
	}
}
void DFS(int start){
	int i;
	for(i=0;i<MAX;i++)
		visited[i] = 0;
	printf("\nDFS: \n");
	DFSUtil(start);
	printf("\n");
}
void topologicalSortUtil(int v, int visited[], int stack[], int *top) {
    visited[v] = 1;
    for (int i = 0; i < MAX; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            topologicalSortUtil(i, visited, stack, top);
        }
    }
    stack[(*top)++] = v; 
}
void topologicalSort() {
    int stack[MAX], top = 0;
    int visited[MAX] = {0};
    for (int i = 0; i < MAX; i++) {
        if (!visited[i]) {
            topologicalSortUtil(i, visited, stack, &top);
        }
    }
    printf("\nTopological Sort: \n");
    while (top > 0) {
        printf("%d ", stack[--top]);
    }
    printf("\n");
}
int BFSForDistance(int start) {
    int queue[MAX], front = 0, rear = 0;
    int dist[MAX];
    int i, maxDistance = 0;

    for (i = 0; i < MAX; i++) {
        visited[i] = 0;
        dist[i] = INT_MAX; 
    }

    queue[rear++] = start;
    visited[start] = 1;
    dist[start] = 0; 

    while (front < rear) {
        int curr = queue[front++];
        for (i = 0; i < MAX; i++) {
            if (graph[curr][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                dist[i] = dist[curr] + 1;
                queue[rear++] = i;
                if (dist[i] > maxDistance)
                    maxDistance = dist[i];
            }
        }
    }
    return maxDistance;
}
void findDiameter() {
    int i, maxDiameter = 0;
    for (i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            visited[j] = 0;
        int currDiameter = BFSForDistance(i);
        if (currDiameter > maxDiameter) {
            maxDiameter = currDiameter;
        }
    }
    printf("\nDiameter of the graph: %d\n", maxDiameter);
}
void main(){
	// clrscr();
	initGraph();
	BFS(0);
	DFS(0);
	getch();
}