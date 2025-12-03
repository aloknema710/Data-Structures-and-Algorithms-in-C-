#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Queue{
    public:
    int currsize;
    Node* front;
    Node* rear;

    Queue(){
        currsize = 0;
        front = nullptr;
        rear = nullptr;
    }

    void push(int x){
        Node* newNode = new Node(x);
        if(rear == nullptr){
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        currsize++;
    }

    int pop(){
        if(front == nullptr){
            cout << "Queue is empty\nExiting..." << endl;
            exit(1);
        }
        int popped = front->data;
        Node* delNode = front;
        front = front->next;
        if(front == nullptr){
            rear = nullptr;
        }
        delete delNode;
        currsize--;
        return popped;
    }

    int top(){
        if(front == nullptr){
            cout << "Queue is empty\nExiting..." << endl;
            exit(1);
        }
        return front->data;
    }
};

int main(){
    Queue q;
    q.push(3);
    q.push(6);
    q.push(9);
    cout << "The front element before popping any element is " << q.top() << endl;
  cout << "The element popped is " << q.pop() << endl;
  cout << "The front element after popping an element is " << q.top() << endl;
}