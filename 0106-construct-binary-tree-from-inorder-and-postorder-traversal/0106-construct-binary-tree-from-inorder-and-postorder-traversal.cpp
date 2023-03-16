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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size()-1;
        return helper(n, inorder, postorder, 0, inorder.size()-1);
    }
    
    TreeNode* helper(int &i, vector<int>&in, vector<int>&post, int l, int r){
        if(l>r) return NULL;
        int x=r;
        while(post[i]!=in[x]){
            x--;
        }
        i--;
        TreeNode* root=new TreeNode(in[x]);
        root->right=helper(i, in, post,x+1, r);
        root->left=helper(i, in, post, l, x-1);
        return root;
    }
    
};