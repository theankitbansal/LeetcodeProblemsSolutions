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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *buildBst(ListNode* head){
        if(!head) return nullptr;
        
        ListNode *slow=head, *fast=head, *prev=nullptr;
        
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(prev) prev->next=nullptr;
        if(slow==head) head=nullptr;
        
        TreeNode *node=new TreeNode(slow->val);
        
        node->left=buildBst(head);
        node->right=buildBst(slow->next);
        
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        return buildBst(head);
    }
};