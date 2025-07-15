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

Node* insertionathead(Node*head, int val){
    Node* temp = new Node(val,head);
    // head->next = head->next;
    return temp;
}

Node* insertionattail(Node*head, int val){
    if(head == nullptr) return NULL;
    Node* newnode = new Node(val, nullptr);
    Node*temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

Node* insertionatkth(Node*head, int k, int val){
    if(head == NULL){
        if(k == 1) return new Node(val);
    } 
    if(k == 1) {
        Node*temp = new Node(val,head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){                      // k - 1 beacause 
            Node* newnode = new Node(val, temp->next);
            temp->next = newnode;
        }
        temp = temp -> next;
    }
    return head;
}

Node*insertbeforeval(Node*head, int el, int val){
    if(head == NULL) return NULL;
    if(head->data == el){
        Node* newnode = new Node(val, head);
        return newnode;
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->next->data == el){
            Node* newnode = new Node(val, temp->next);
            temp -> next = newnode;
            break;
        }
        temp = temp ->next;
    }
    return head;
}

int main(){
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    int val = 8;
    head = insertionathead(head, val);
    print(head);
    head = insertionattail(head, val);
    print(head);
    int k = 4;
    head = insertionatkth(head,k,val);
    print(head);
    head = insertbeforeval(head,3,val);
    print(head);
}