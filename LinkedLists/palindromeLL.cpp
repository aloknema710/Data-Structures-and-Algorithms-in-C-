#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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

// brute force approach
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode*temp = head;
//         stack<int> st;
//         while(temp != nullptr){
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp != nullptr){
//             if(temp->val != st.top()) return false;
//             st.pop();
//             temp = temp->next;
//         }
//         return true;
//     }
// };

// optimal approach :tortoise and Hare (uses conccepts from reverse and middlenodes)
// O(2N) & O(1)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* NewHead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = NewHead;
        while(second != nullptr){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        reverseLL(NewHead);
        return true;
    }
};