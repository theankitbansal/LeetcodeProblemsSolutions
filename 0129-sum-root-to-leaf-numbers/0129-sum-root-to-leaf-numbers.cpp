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
    int ans=0;
    void add(TreeNode* root, int numtillnow){
        if(root==NULL){
            return;
        }
        numtillnow*=10;
        numtillnow+=root->val;
        if(root->left==NULL && root->right==NULL){
            ans+=numtillnow;
            return;
        }
        add(root->left, numtillnow);
        add(root->right, numtillnow);
        return;
    }
    int sumNumbers(TreeNode* root) {
        add(root,0);
        return ans;
    }
};