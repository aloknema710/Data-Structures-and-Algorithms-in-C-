#include<bits/stdc++.h>
using namespace std; 

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// brute force approach
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp = head;
//         stack<int> st;
//         while(temp != nullptr){
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp != nullptr){
//             temp->val = st.top();
//             st.pop();
//             temp = temp->next;
//         }
//     return head;
//     }
// };

ListNode* reverseLL(ListNode* head){
    ListNode* temp = head;
    ListNode* back = NULL;
    ListNode* front = NULL;

    while (temp!=nullptr){
        front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;
    }
    return back;
}

void print(ListNode* head){
    ListNode* temp = head;
    while (temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(5);
    reverseLL(head);
    print(head);
}