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

void print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* back = NULL;
    Node* front = NULL;

    while (temp!=nullptr){
        front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;
    }
    return back;
}

Node* addOne(Node* head) {
    head = reverseLL(head);
    Node* temp = head;
    int carry = 1;
    while (temp!=nullptr){
        temp->data += carry;
        if(temp->data < 10){
            carry = 0;
            break;
        }else{
            temp->data = 0;
            carry = 1;
        }
        if(temp->next == nullptr && carry == 1){
            temp->next = new Node(1);
            carry = 0;
        }
        temp = temp->next;
    }
    head = reverseLL(head);
    return head;
}

int main(){
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(4);

    cout << "Original List: ";
    print(head);

    head = addOne(head);

    cout << "After Adding One: ";
    print(head);

    return 0;
}