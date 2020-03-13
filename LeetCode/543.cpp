/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int res;
    
    int getDepth(TreeNode *root){
        if(root==NULL) return 0;
        int l=getDepth(root->left);
        int r=getDepth(root->right);
        res=max(res, l+r);
        return max(l, r)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        res=0;
        getDepth(root);
        return res;
    }
};
