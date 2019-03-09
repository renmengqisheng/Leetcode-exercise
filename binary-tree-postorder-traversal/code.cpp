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
        s.push(root);
        /*做法一：辅助栈
        stack<int> help;
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
        */
        /*
        做法二：使用STL库函数
        */
        while(!s.empty())
        {
            TreeNode* t = s.top();
            s.pop();
            v.push_back(t->val);
            if(t->left) s.push(t->left);
            if(t->right) s.push(t->right);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
