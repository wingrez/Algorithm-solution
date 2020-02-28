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
        stack<int> s1, s2;
        ListNode *p1=l1, *p2=l2;
        while(p1){
            s1.push(p1->val);
            p1=p1->next;
        }
        while(p2){
            s2.push(p2->val);
            p2=p2->next;
        }
        ListNode *ans=new ListNode(0);
        int c=0;
        while(!s1.empty() && !s2.empty()){
            int a=s1.top(); s1.pop();
            int b=s2.top(); s2.pop();
            int sum=a+b+c;
            c=sum/10;
            ListNode *t=new ListNode(sum%10);
            t->next=ans->next;
            ans->next=t;
        }
        while(!s1.empty()){
            int a=s1.top(); s1.pop();
            int sum=a+c;
            c=sum/10;
            ListNode *t=new ListNode(sum%10);
            t->next=ans->next;
            ans->next=t;
        }
        while(!s2.empty()){
            int b=s2.top(); s2.pop();
            int sum=b+c;
            c=sum/10;
            ListNode *t=new ListNode(sum%10);
            t->next=ans->next;
            ans->next=t;
        }
        if(c){
            ListNode *t=new ListNode(c);
            t->next=ans->next;
            ans->next=t;
        }
        return ans->next;
    }
};
