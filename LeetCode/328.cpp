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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *pHead=new ListNode(0);
        pHead->next=head;
        ListNode *pre=pHead, *cur=head, *p=pHead;
        int cnt=0;
        while(cur){
            cnt++;
            if(cnt%2){
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
