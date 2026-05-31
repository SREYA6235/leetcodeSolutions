/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        while(prev->next  && prev->next->next)
           {
            ListNode * first=prev->next;//first node
            ListNode * second=first->next;//second node
            first->next=second->next;// 1->=3
            second->next=first;//2 rd->=1
            prev->next=second;//
            prev=first; 
           }          
           return dummy.next;//2
        
    }
};