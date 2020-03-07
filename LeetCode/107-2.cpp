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
    vector<vector<int> > res;

    void visitNextLevel(queue<TreeNode*> curLevel){
        queue<TreeNode*> nextLevel; //存放下一层的结点
        vector<int> vals; //存放当前层的元素值
        while(!curLevel.empty()){
            TreeNode *root=curLevel.front();
            curLevel.pop();
            vals.push_back(root->val);
            if(root->left) nextLevel.push(root->left);
            if(root->right) nextLevel.push(root->right);
        }
        if(!nextLevel.empty()) 
            visitNextLevel(nextLevel);
        res.push_back(vals);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> nextLevel;
        if(root!=NULL){
            nextLevel.push(root);
            visitNextLevel(nextLevel);
        }
        return res;
    }
};
