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
             ListNode* reverseKGroup(ListNode* head, int k) {
                    ListNode* cur=head;
                    int c=0;
                    while(c<k && cur)
                    {
                        cur=cur->next;
                        c=c+1;
                    }
                    if(c<k)
                    {
                        return head;
                    }
                    ListNode* prev=nullptr;
                    cur=head;
                    for(int i=0;i<k;i++)
                    {
                        ListNode* n=cur->next;
                        cur->next=prev;
                        prev=cur;
                        cur=n;
                    }
                 head->next=reverseKGroup(cur,k) ;
                 return prev;  
             }
};