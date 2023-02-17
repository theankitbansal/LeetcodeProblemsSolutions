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
    priority_queue<int>vals;
    void add(TreeNode* root){
        if(root==NULL){
            return;
        }
        vals.push(root->val);
        add(root->left);
        add(root->right);
        return;
    }
    int minDiffInBST(TreeNode* root) {
        add(root);
        int mindiff=INT_MAX, temp=vals.top();
        vals.pop();
        while(!vals.empty()){
            mindiff=min(mindiff, abs(temp-vals.top()));
            temp=vals.top();
            vals.pop();
        }
        return mindiff;
    }
};