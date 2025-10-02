#include<bits/stdc++.h>
using namespace std;    

class Node {               // we can say struct or class is a blueprint for creating nodes
public:    
    int data;               // data part of the node
    Node* next;             // pointer to the next node in the linked list
    Node(int data1 , Node* next1){          // constructor to initialize the node
        data = data1;                       // initialize data with the given value 
        next = next1;                  // initialize next pointer with the given pointer
    }
    Node(int data1){
        data = data1;                       // initialize data with the given value 
        next = nullptr;                  // initialize next pointer to nullptr
    }
};

// Node* sortLL(Node* head){
//     int count0 = 0, count1 = 0, count2 = 0;
//     Node* temp = head;
//     while(temp != nullptr){
//         if(temp->data == 0) count0++;
//         else if(temp->data == 1) count1++;
//         else count2++;
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp != nullptr){
//         if(count0){
//             temp->data = 0;
//             count0--;
//         }
//         else if(count1){
//             temp->data = 1;
//             count1--;
//         }
//         else{
//             temp->data = 2;
//             count2--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* sortLL(Node* head){
    Node*zerohead = new Node(-1);
    Node*onehead = new Node(-1);
    Node*twohead = new Node(-1);
    Node*zero = zerohead;
    Node*one = onehead;
    Node*two = twohead;

    Node*temp = head;
    
    while(temp != nullptr){
        if(temp->data == 0){
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (onehead->next) ? (onehead->next) : (twohead->next);
    one->next = twohead->next;
    two->next = nullptr;

    Node* newhead = zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return newhead;
}

int main(){
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(0);
    head -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next = new Node(0);
    sortLL(head);
    print(head);
}