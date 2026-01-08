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

vector<int> inorderIterative(Node* root) {
    vector<int> result;
    stack<Node*>s;

    Node* current = root;
    while(true){
        if(current!=NULL){
            s.push(current);
            current = current->left;
        }else{
            if(s.empty()) break;
            current = s.top();
            s.pop();
            result.push_back(current->data);
            current = current->right;
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

    vector<int> inorder = inorderIterative(root);
    for(int val : inorder) {        
        cout << val << " ";
    }
}