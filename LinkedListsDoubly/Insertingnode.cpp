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

Node* insertathead(Node*& head, int val){
    Node* temp = new Node(val, head, nullptr);
    temp->next->prev = temp; // Set the previous pointer of the old head to the new head
    head = temp; // Update head to the new node
    return head;
}

Node* insertattail(Node* head, int val){
    Node* newnode = new Node(val);
    if (head == nullptr) {
        return newnode; // If the list is empty, return the new node as head
    }
    Node*temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newnode; // Link the last node to the new node
    newnode->prev = temp; // Set the previous pointer of the new node to the last node
    return head;
}

Node* middleinsert(Node* head, int value, int index){
    Node* newnode = new Node(value);
    Node* temp = head;
    int cnt = 0;
    while (temp->next != nullptr && cnt < index){
        cnt++;
        if(cnt == index){
            newnode->next = temp->next;
            temp->next = newnode;
            newnode->prev = temp;

        }
        temp = temp->next;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    head->next = second;
    head->prev = nullptr; // head's previous is always nullptr
    second->next = third;
    second->prev = head;
    third->next = fourth;
    third->prev = second;
    fourth->next = nullptr; // last node's next is always nullptr
    fourth->prev = third;
    cout<<"Original Doubly Linked List: ";
    print(head);
    insertathead(head, 5);        // reassign or use as pass by reference -- very imp.. point
    cout<<"After inserting at head: ";
    print(head);
    insertattail(head, 5);
    cout<<"After inserting at tail: ";
    print(head);
    int k = 25;
    middleinsert(head, k, 3);
    print(head);
}


/*
Learning

Node* insertathead(Node* head, int val){
    Node* temp = head;
    Node* newnode = new Node(val, head, nullptr);
    temp->prev = newnode; // Set the previous pointer of the old head to the new head
    head = newnode; // Update head to the new node
    return head;
}

*/