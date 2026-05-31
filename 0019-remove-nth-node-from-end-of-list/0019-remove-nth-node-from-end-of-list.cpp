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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode d(0,head); //1,2,3,4,5
      ListNode *fast=&d;
      ListNode *slow=&d;
      for(int i=0;i<=n;i++)
      {
        fast=fast->next;//fast have 1,2,3
      }
      while(fast)
           {
            fast=fast->next;//4,5,null
            slow=slow->next;//1,2,3
           }
           slow->next=slow->next->next;//remove 4 aso 5
        return d.next;
    }
    
};