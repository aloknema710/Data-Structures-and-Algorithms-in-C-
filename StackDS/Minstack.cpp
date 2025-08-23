#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
    static const int SIZE = 1000;
    int arr[SIZE];        // Main stack array
    int minArray[SIZE];   // Minimum tracking array
    int topIndex;

public:
    MinStack() {
        topIndex = -1; // Stack is empty
    }

    void push(int val) {
        if (topIndex + 1 >= SIZE) return; // Prevent overflow
        topIndex++;
        arr[topIndex] = val;

        if (topIndex == 0)
            minArray[topIndex] = val;
        else
            minArray[topIndex] = min(val, minArray[topIndex - 1]);
    }

    void pop() {
        if (topIndex >= 0)
            topIndex--;
    }

    int top() {
        if (topIndex >= 0)
            return arr[topIndex];
        return -1; // or throw an exception
    }

    int getMin() {
        if (topIndex >= 0)
            return minArray[topIndex];
        return -1; // or throw an exception
    }
};


/*
another time saving logic

class MinStack {
 public:
    stack<int> st;      
    stack<int> min_stack;  

    MinStack() {}

    void push(int val) {
        st.push(val);
        if (min_stack.empty() || val <= min_stack.top()) {
            min_stack.push(val);
        }
    }

    void pop() {
        if (st.top() == min_stack.top()) {
            min_stack.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return min_stack.top();
    }
};

*/

/*

// class MinStack {
// public:
//        int top = -1, size = 1000;
//         int* arr = new int[size];
//         int* minarray = new int[size];
//     MinStack() {
//     }
    
//     void push(int val) {
//         top++;
//         arr[top] = val;

//         if(top == 0) minarray[top] = val;

//         else minarray[top] = min(val,minarray[top - 1]);
//     }
    
//     void pop() {
//         int x = arr[top];
//         top--;
//         return x;
//     }
    
//     int top() {
//         return arr[top];
//     }
    
//     int getMin() {
//         minarray.top();
//     }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 
*/