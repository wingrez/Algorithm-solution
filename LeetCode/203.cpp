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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            ListNode *p=head;
            head=head->next;
            delete p;
        }
        if(head==NULL) return NULL; 
        ListNode *pre=head;
        while(pre->next){
            if(pre->next->val==val){
                ListNode* p=pre->next;
                pre->next=p->next;
                delete p;
            }
            else{
                pre=pre->next;
            }
        }
        return head;
    }
};
