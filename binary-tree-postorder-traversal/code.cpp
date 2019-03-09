/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> v;
        if(!root) return v;
        stack<TreeNode *> s;
        stack<int> help;
        s.push(root);
        while(!s.empty())
        {
            TreeNode *t = s.top();
            s.pop();
            help.push(t->val);
            if(t->left) s.push(t->left);
            if(t->right) s.push(t->right);
        }
        while(!help.empty())
        {
            v.push_back(help.top());
            help.pop();
        }
        return v;
    }
};
