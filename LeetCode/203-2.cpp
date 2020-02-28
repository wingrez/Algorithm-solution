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
        ListNode *pHead=new ListNode(0), *cur=pHead;
        pHead->next=head;
        while(cur->next){
            if(cur->next->val==val){
                ListNode *p=cur->next;
                cur->next=p->next;
                delete p;
            }
            else{
                cur=cur->next;
            }
        }
        return pHead->next;
    }
};
