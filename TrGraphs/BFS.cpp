#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int start, vector<vector<int>> &adjList){
    vector<int> bfsOrder;
    vector<bool> visited(adjList.size(), false);
    visited[start] = true;
    queue<int> q;
    q.push(0);

    while (!q.empty()){
        int node = q.front();
        q.pop();
        bfsOrder.push_back(node);

        for (auto it : adjList[node]){
            visited[it] = true;
            q.push(it);
        }
        
    }
    
    return bfsOrder;
}



int main() {
    int n = 6; // number of nodes
    vector<vector<int>> adjList(n);

    // Undirected graph
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0, 5};
    adjList[3] = {1};
    adjList[4] = {1};
    adjList[5] = {2};

    int startNode = 0;
    vector<int> result = bfs(startNode, adjList);

    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " ";     //BFS Traversal: 0 1 2 3 4 5
    }
    cout << endl;

    return 0;
}
