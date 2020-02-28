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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *pHead=new ListNode(0);
        pHead->next=head;
        ListNode *pre=pHead, *cur=head;
        int cnt=0;
        while(cur){
            ListNode *next=cur->next;
            cnt++;
            if(cnt>=m && cnt<=n){ //new_cur!=NULL
                ListNode *new_pre=NULL, *new_cur=cur;
                while(cnt>=m && cnt<=n){
                    ListNode *new_next=new_cur->next;
                    cnt++;
                    new_cur->next=new_pre;
                    new_pre=new_cur;
                    new_cur=new_next;
                }
                pre->next=new_pre;
                cur->next=new_cur;
                break;
            }
            pre=cur;
            cur=next;
        }
        return pHead->next;
    }
};
