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
    TreeNode *p=new TreeNode(0);
    TreeNode* traverse(TreeNode* root){
        if(root!=NULL){
            traverse(root->left);
            p->right=new TreeNode(root->val);
            p=p->right;
            traverse(root->right);
        }
        return NULL;
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *newroot=p;
        traverse(root);
        return newroot->right;
    }
};
