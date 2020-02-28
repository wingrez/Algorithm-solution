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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *pHead=new ListNode(0);
        pHead->next=head;

        ListNode *p=pHead, *q=pHead;
        for(int i=0; i<n+1; i++){
            q=q->next;
        }
        while(q!=NULL){
            p=p->next;
            q=q->next;
        }
        ListNode *delNode=p->next;
        p->next=delNode->next;
        delete delNode;

        return pHead->next;
    }
};
