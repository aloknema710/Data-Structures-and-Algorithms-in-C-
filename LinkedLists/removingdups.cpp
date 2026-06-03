#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        
        while(temp && temp->next){
            if(temp->val == temp->next->val) temp->next = temp->next->next;

            else temp = temp->next;
        }
        
        return head;
    }

public:
    ListNode* deleteDuplicatesII(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* temp = head;
        while(temp){
            bool dup = false;
            while(temp->next && temp->val == temp->next->val){
                dup = true;
                temp = temp->next;
            }
            if(dup) prev->next = temp->next;
            else prev = prev->next;
            temp = temp->next;
        }
        return dummy.next;
    }
};