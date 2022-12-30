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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int ans=0;
        bool lastmatch=0;
        while(head){
            if(s.find(head->val)==s.end()){
                lastmatch=0;
            }else{
                if(!lastmatch){
                    ans++;
                lastmatch=1;
                }
            }
            head=head->next;
        }
        return ans;
    }
};