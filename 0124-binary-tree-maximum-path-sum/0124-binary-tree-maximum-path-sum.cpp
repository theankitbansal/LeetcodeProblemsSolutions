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
    int sum=INT_MIN;
    
    int calculateMaxPathSum(TreeNode* root){
        if(root==NULL) return 0;
        
        int lhsum=max(0, calculateMaxPathSum(root->left));
        int rhsum=max(0, calculateMaxPathSum(root->right));
        
        sum=max(sum, root->val+lhsum+rhsum);
        
        
        return max(lhsum,rhsum)+root->val;
    }
    
    
    
    int maxPathSum(TreeNode* root) {
        calculateMaxPathSum(root);
        return sum;
    }
};