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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l=new ListNode(0);
        ListNode *p1=l1, *p2=l2, *p3=l;
        while(p1 && p2){
            if(p1->val<=p2->val){
                p3->next=new ListNode(p1->val);
                p1=p1->next;
            }
            else{
                p3->next=new ListNode(p2->val);
                p2=p2->next;
            }
            p3=p3->next;
        }
        while(p1){
            p3->next=new ListNode(p1->val);
            p1=p1->next; 
            p3=p3->next;
        }
        while(p2){
            p3->next=new ListNode(p2->val);
            p2=p2->next; 
            p3=p3->next;
        }
        return l->next;
    }
};
