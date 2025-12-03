#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* topNode;   // renamed to avoid conflict
    int size;

public:
    Stack() {
        topNode = nullptr;
        size = 0;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
        size++;
    }

    int peek() {   // renamed from top()
        if (topNode == nullptr) {
            throw runtime_error("Stack is empty");
        }
        return topNode->data;
    }

    int pop() {
        if (topNode == nullptr) {
            throw runtime_error("Stack is empty");
        }

        int value = topNode->data;
        Node* temp = topNode;
        topNode = topNode->next;

        delete temp;
        size--;
        return value;
    }

    bool empty() {
        return topNode == nullptr;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);

    cout << "Top of stack before popping: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Top after popping: " << s.peek() << endl;

    return 0;
}
