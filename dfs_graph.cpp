//dfs
//graph

#include <iostream>
#include <vector>
#include <list>
using namespace std;

void addEdge(vector<list<int> >&graph,int u,int v) {
    graph[u].push_back(v);
}

vector<bool>visited; 

void dfs(vector<list<int> > graph,int start) {
    if(visited[start])
        return;
    
    visited[start] = true;
    cout<<start<<"  ";
    for(auto x: graph[start]) {
        dfs(graph,x);
    }
}

int main()
{
    vector<list<int> > graph;
    int V=4;
    graph.resize(V);
    visited.resize(V,false);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    dfs(graph,2);

    return 0;
}