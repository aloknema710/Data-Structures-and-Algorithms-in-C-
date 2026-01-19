#include <bits/stdc++.h>
using namespace std;

void dfsHelper(int node, vector<vector<int>> &adjList,
               vector<bool> &visited, vector<int> &dfs) {
    visited[node] = true;
    dfs.push_back(node);

    for (int it : adjList[node]) {
        if (!visited[it]) {
            dfsHelper(it, adjList, visited, dfs);
        }
    }
}

vector<int> dfs(int startNode, vector<vector<int>> &adjList) {
    vector<int> dfsTraversal;
    vector<bool> visited(adjList.size(), false);

    dfsHelper(startNode, adjList, visited, dfsTraversal);
    return dfsTraversal;
}

int main() {
    int n = 9; // nodes 0 to 8
    vector<vector<int>> adjList(n);

    // Undirected graph
    adjList[1] = {2, 3};
    adjList[2] = {1, 5, 6};
    adjList[3] = {1, 4, 7};
    adjList[4] = {3, 8};
    adjList[5] = {2};
    adjList[6] = {2};
    adjList[7] = {3, 8};
    adjList[8] = {4, 7};

    int startNode = 1;
    vector<int> result = dfs(startNode, adjList);

    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
