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
    void traverse(int level,int& dep,TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            dep=min(dep,level+1);
            return;
        }
        else
        {
            if(root->left!=NULL)
                traverse(level+1,dep,root->left);
            if(root->right!=NULL)
                traverse(level+1,dep,root->right);
        }
    }
    int minDepth(TreeNode* root) {
        int dep=INT_MAX;
        if(root==NULL)
            return 0;
        traverse(0,dep,root);
        return dep;
    }
};
