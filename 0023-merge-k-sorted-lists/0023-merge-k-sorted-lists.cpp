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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>,vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>>pq;
        for(ListNode * listHead:lists){
            if(listHead!=NULL) pq.push({listHead->val, listHead});
        }
        ListNode* newHead=new ListNode(-1);
        ListNode* newTail=newHead;
        while(!pq.empty()){
            int minVal=pq.top().first;
            ListNode* minNode=pq.top().second;
        pq.pop();
        if(minNode->next!=NULL)
            pq.push({minNode->next->val, minNode->next});
        
        newTail->next=minNode;
        newTail=minNode;
    }
    return newHead->next;
    }
};