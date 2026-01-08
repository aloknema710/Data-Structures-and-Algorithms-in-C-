#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int> preorderIterative(Node* root) {
    vector<int> result;
    if (!root) return result;

    stack<Node*> s;
    s.push(root);

    while (s.empty()){
        Node* current = s.top();
        s.pop();
        result.push_back(current->data);

        if (current->right) {
            s.push(current->right);
        }
        if (current->left) {
            s.push(current->left);
        }
    }
    
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->left->right->left = new Node(1);

    vector<int> preorder = preorderIterative(root);
    for(int val : preorder) {
        cout << val << " ";
    }
    return 0;
}