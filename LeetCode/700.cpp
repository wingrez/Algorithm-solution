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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root!=NULL){
            if(root->val==val) return root;
            TreeNode *n1=searchBST(root->left, val);
            if(n1!=NULL) return n1;
            TreeNode *n2=searchBST(root->right, val);
            if(n2!=NULL) return n2;
        }
        return NULL;
    }
};
