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
        cout<<head->data<<" ";
        temp = temp -> next;
    }
}

Node* removehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head -> next;
    free(temp);
    return head;
}

Node* removetail(Node* head){
    if(head == NULL || head -> next == NULL) return NULL;     // it must have atleast 2 nodes present single element ll is itself tail 
    Node* temp = head;
    while (temp -> next -> next != NULL){       // loop chalega till temp pointer is standing at second last elem
        temp = temp -> next;
    }
    // temp -> next = NULL;
    delete temp -> next;
    temp -> next = nullptr;
    return temp;
}

Node* deletekthelem(Node* head, int k){
    if(head == NULL) return head;
    int cnt = 0; 
    Node* temp = head;
    Node* prev = NULL;
    if(k == 1) return removehead(head);
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev -> next = temp -> next ->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return temp;
}

int main(){
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    // head = removehead(head);
    // head = removetail(head);
    head = deletekthelem(head, 3);
    cout<<head;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val; // replacing 5 with 1 here
//         ListNode*temp = node->next;  // temp is pointing to second 1
//         node->next = node->next->next;        
//         delete temp;
//     }
// };