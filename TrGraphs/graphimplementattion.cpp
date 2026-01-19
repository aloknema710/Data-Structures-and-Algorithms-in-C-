#include<bits/stdc++.h>
using namespace std;

class Node{};

int main(){
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;
    // int graph[n+1][m+1];
    // for (int i = 0; i < m; i++){
    //     int u, v;
    //     cin >> u >> v;
    //     graph[u][v] = 1;
    //     graph[v][u] = 1;
    // }
    
    vector<vector<int>> adjList(n + 1);
    for (int i = 0; i < m; i++){
        int u, v;
        // in case of directed graph, we will not add the second pushback
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }
}