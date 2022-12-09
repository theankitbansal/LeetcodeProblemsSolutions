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
    void solve(TreeNode* root, int &maxi){
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front=q.front();
            q.pop();
            int value=abs(root->val-front->val);
            if(maxi<value) maxi=value;
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        solve(root->left, maxi);
        solve(root->right, maxi);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int maxi=INT_MIN;
        solve(root, maxi);
        return maxi;
    }
};