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
        ListNode *pre=NULL, *cur=head;
        while(cur){
            if(pre==NULL || cur->val!=pre->val){
                pre=cur;
            }
            cur=cur->next;
            pre->next=cur;
        }
        return head;
    }
};
