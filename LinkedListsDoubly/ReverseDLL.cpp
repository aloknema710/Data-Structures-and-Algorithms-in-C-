#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* reverseDLL(Node* head){
    if (head == NULL || head->next == NULL) return head;
    Node* temp = head;
    // Node* newnode = nullptr;
    while (temp != NULL){
        Node* prevNode = temp->prev;
        temp->prev = temp->next;
        temp->next = prevNode;
        temp = temp->prev;       // since we are moving backwards
    }
    head = temp;
    return head;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    head->next = second;
    head->prev = nullptr;
    second->next = third;
    second->prev = head;
    third->next = fourth;
    third->prev = second;
    fourth->next = fifth;
    fourth->prev = third;
    fifth->next = nullptr;
    fifth->prev = fourth;
    reverseDLL(head);
}