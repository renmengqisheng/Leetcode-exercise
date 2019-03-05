class Solution {
public:
    /**********************************
    *思路一
    int run(TreeNode *root) {
        if(!root) return 0; //当前结点是空结点，返回0
        if(!root->left && !root->right) return 1; //当前结点是叶子结点，返回1
        if(!root->left && root->right) return run(root->right)+1; //当前结点有右无左
        if(root->left && !root->right) return run(root->left)+1; ////当前结点有左无右
        return min(run(root->left), run(root->right))+1; //当前结点左右双全
    }
    ***********************************/
    /**********************************
    *思路二
    ***********************************/
    int run(TreeNode *root) {
        if(!root) return 0;
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            ++level;
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* t = q.front();
                q.pop();
                if(!t->left && !t->right) return level;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return level;
    }
    
};
