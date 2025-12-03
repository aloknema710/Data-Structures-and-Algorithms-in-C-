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

void inorder(Node* root, vector<int>& ans) {
    if (root == nullptr) return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

vector<int> inorderTraversal(Node* root) {
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->left->right->left = new Node(1);

    vector<int> in = inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int x : in) cout << x << " ";
    cout << endl;

    return 0;
}
