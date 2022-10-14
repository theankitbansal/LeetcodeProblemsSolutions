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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode *p, *q, *r;
        p=q=head;
        r=NULL;
        while(q!=NULL){
            q=q->next;
            if(q){
                r=p;
                p=p->next;
            }
            if(q) q=q->next;
        }
        
        r->next=p->next;
        delete p;
       
        return head;
    }
};