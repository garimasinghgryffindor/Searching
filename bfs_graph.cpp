//bfs
//graph

#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

void addEdge(vector<list<int> >&graph,int u,int v) {
    graph[u].push_back(v);
}

void bfs(vector<list<int> > graph,int start) {
    vector<bool>visited;
    visited.resize(graph.size(),false);

    queue<int>q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout<<node<<"  ";
        for(int x: graph[node]) {
            if(!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }

    cout<<endl;
}

int main()
{
    vector<list<int> > graph;
    int V=4;
    graph.resize(V);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    bfs(graph,1);

    return 0;
}