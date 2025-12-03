#include<bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp = list1;
//         multiset<int> myMultiSet;
//         while(temp!=nullptr){
//             myMultiSet.insert(temp->val);
//             temp = temp->next;
//         }
//         temp = list2;
//         while(temp!=nullptr){
//             myMultiSet.insert(temp->val);
//             temp = temp->next;
//         }
//         ListNode* dummy = new ListNode(-1);
//         ListNode* curr = dummy;
//         for(int val: myMultiSet){
//             curr->next = new ListNode(val);
//             curr = curr->next;
//         }
//         return dummy->next;
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode* temp = &dummy;
        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        temp->next = list1 ? list1 : list2;
        return dummy.next;
    }
};