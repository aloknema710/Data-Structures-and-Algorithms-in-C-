#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
    struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        // ListNode* temp = head;
        // set<ListNode*> st;
        // while(temp != nullptr){
        //     if(st.find(temp) != st.end()){
        //         return true;
        //     }else{
        //         st.insert(temp);
        //     }
        //     temp = temp->next;
        // }
        // return false;
        ListNode *slow = head, *fast = head;
        while (fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return 1;
        }
        return 0;
    }
};