/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        head=head->next;
        ListNode *p=head;
        while(p){
            int sum=0;
            ListNode *q=p;
            while(q->val!=0){
                sum+=q->val;
                q=q->next;
            }
            p->val=sum;
            p->next=q->next;
            p=p->next;
        }
        return head;
    }
};