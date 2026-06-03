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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* tail = head;
        int cnt = 1;
        while(tail->next) {
            tail = tail->next;
            cnt++;
        }
        k = k % cnt;
        // if(k == 0) return head;
        tail->next = head;

        int steps = cnt - k - 1;
        ListNode* newTail = head;
        while(steps--){
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};