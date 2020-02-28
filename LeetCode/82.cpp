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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pHead=new ListNode(0);
        pHead->next=head;
        ListNode *p=pHead, *pre=pHead, *cur=head;
        int isrepeated=0;
        while(cur){
            if(pre!=pHead && pre->val==cur->val){
                isrepeated=1;
            }
            else if(pre!=pHead && pre->val!=cur->val){
                if(isrepeated==1){
                    isrepeated=0;
                }
                else{
                    pre->next=NULL;
                    p->next=pre;
                    p=pre;
                }
            }
            pre=cur;
            cur=cur->next;
            if(isrepeated==0 && cur==NULL){
                pre->next=NULL;
                p->next=pre;
                p=pre;
            }
        }
        if(p==pHead) return NULL;
        return pHead->next;
    }
};
