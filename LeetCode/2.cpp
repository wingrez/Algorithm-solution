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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l=new ListNode(0);
        ListNode *ans=l;
        int c=0;
        while(l1!=NULL || l2!=NULL){
            l->next=new ListNode(c);
            l=l->next;
            if(l1!=NULL){
                l->val+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                l->val+=l2->val;
                l2=l2->next;
            }
            c=l->val/10;
            l->val%=10;
        }
        if(c>0){
            l->next=new ListNode(c);
        }
        return ans->next;
    }
};

