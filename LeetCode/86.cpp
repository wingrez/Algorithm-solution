/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *pHead=new ListNode(0);
        pHead->next=head;
        ListNode *pre=pHead, *cur=head, *p=pHead;
        while(cur){
            if(cur->val<x){
                if(pre!=p){
                    pre->next=cur->next;
                    cur->next=p->next;
                    p->next=cur;
                    p=cur;
                    cur=pre->next;
                }
                else{
                    p=pre=cur;
                    cur=cur->next;
                }
            }
            else{
                pre=cur;
                cur=cur->next;
            }
        }
        return pHead->next;
    }
};
