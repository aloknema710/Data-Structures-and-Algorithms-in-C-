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

void postorder(Node* root, vector<int>& ans) {
    if (root == nullptr) return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> postorderTraversal(Node* root) {
    vector<int> ans;
    postorder(root, ans);
    return ans;
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->left->right->left = new Node(1);

    vector<int> post = postorderTraversal(root);

    cout << "Postorder Traversal: ";
    for (int x : post) cout << x << " ";
    cout << endl;

    return 0;
}
