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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     ListNode* ans=nullptr;
     for(ListNode* list: lists)
     {
        ans=solve(ans,list);
     
     }
     return ans;
        
    };
    ListNode* solve(ListNode *a,ListNode*b)
    {
        ListNode dummy(0);
        ListNode* d=&dummy;
    if(!a)
    {
        return b;
    }
    if(!b)
    {
        return a;
    }
    while(a && b)
    {
    if(a->val < b->val)
      {
        d->next=a;
        a=a->next;
      }
      else
        {
            d->next=b;
            b=b->next;
        }
        d=d->next;
    } 
        if(a)
          {
            d->next=a;
          }
          else
          {
            d->next=b;
          }
        return dummy.next;
    }
};