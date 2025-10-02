#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node*next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int length_of_ll(Node* head) {
    int length = 0; // Initialize length to 0
    Node* mover = head; // Start from the head of the linked list
    while(mover != nullptr) { // Traverse until we reach the end of the list
        length++; // Increment length for each node
        mover = mover->next; // Move to the next node
    }
    return length; // Return the total length of the linked list
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

// brute method
// Node* RemoveNthnode(Node* head, int cnt){
//     int n = length_of_ll(head);
//     int res = n - cnt;
//     Node* temp = head;
//     while(temp != nullptr){
//         res--;
//         if(res == 0) break;
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     return head;
// }

Node* RemoveNthnode(Node* head, int cnt){
    Node* fast = head;
    for(int i = 0; i < cnt; i++) fast = fast->next;
    if (fast == nullptr) {
        Node* delNode = head;
        head = head->next;
        delete delNode;
        return head;
    }
    Node* slow = head;
    while (fast->next != nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    RemoveNthnode(head, 2);
    print(head);
}