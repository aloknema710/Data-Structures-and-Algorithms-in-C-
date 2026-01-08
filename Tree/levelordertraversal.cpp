#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

 vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> result;
    if (!root) return result;

    queue<Node*> q;      //why queue because we need FIFO in this traversal
    q.push(root);

    while (!q.empty()){
        int size = q.size();
        vector<int> currentLevel;
        for (int i = 0; i < size; i++){
            Node* node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            currentLevel.push_back(node->data);
        }
        result.push_back(currentLevel);
    }
    return result;
 }

int main() {
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->left->right->left = new Node(1);

    vector<vector<int>> levels = levelOrder(root);
    for (const auto& level : levels) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}