#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {}

    void push(int x) {
        // Move all items from s1 → s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push new element into s1
        s1.push(x);

        // Move items back from s2 → s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};


int main() {
    MyQueue q;

    q.push(1);
    q.push(2);
    cout << q.peek() << endl; // returns 1
    cout << q.pop() << endl;  // returns 1
    cout << q.empty() << endl; // returns false

    return 0;
}
