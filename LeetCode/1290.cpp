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
    int getDecimalValue(ListNode* head) {
        int num=0;
        while(head!=NULL){
            num=num*2+head->val;
            head=head->next;
        }
        return num;
    }
};
