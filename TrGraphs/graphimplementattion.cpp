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


    // for weighted graphs
    vector<vector<pair<int, int>>> adjaList(n + 1);
    for (int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;

        adjaList[u].push_back({v, w});
        adjaList[v].push_back({u, w}); // remove this for directed graph
    }
}