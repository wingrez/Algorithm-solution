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
    struct Command{
        string s; // go/print
        TreeNode *node;
        Command(string s, TreeNode *node): s(s), node(node){}
    };

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;

        stack<Command> stack;
        stack.push( Command("go", root) );

        while(!stack.empty()){
            Command command=stack.top();
            stack.pop();

            if(command.s=="print")
                res.push_back( command.node->val );
            else{
                if(command.node->right)
                    stack.push( Command("go", command.node->right) );
                if(command.node->left)
                    stack.push( Command("go", command.node->left) );
                stack.push( Command("print", command.node) );
            }
        }

        return res;
    }
};
