#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    MyStack() {
        // No need for initialization here, as the queue is already default constructed
    }
    
    void push(int x) {
        int s = q.size();
        q.push(x);  // Push the new element into the queue
        for (int i = 0; i < s; ++i) {
            // Move all the elements that were in the queue before this push to the back
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int front = q.front();
        q.pop();
        return front;
    }
    
    int top() {
        return q.front();  // The front of the queue is the most recent pushed element
    }
    
    bool empty() {
        return q.empty();  // Return true if the queue is empty
    }

private:
    queue<int> q;  // Declare the queue as a member variable
};


int main() {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    cout << stack.top() << endl;   // Outputs 2
    cout << stack.pop() << endl;    // Outputs 2
    cout << stack.empty() << endl;  // Outputs 0 (false)
    return 0;
}