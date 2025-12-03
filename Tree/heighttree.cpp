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

int height(Node* root){
    if(root == nullptr){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;   // this statement will be executed in each and every recursive call
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->left->right->left = new Node(1);
}