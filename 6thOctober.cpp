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
TreeNode* helper(TreeNode* root , int value)
{
    if(root==NULL)
    {
        TreeNode* temp=new TreeNode(value);
        return temp;
    }
    if(value<root->val)
    {
        root->left=helper(root->left,value);
    }
    else
    {
        root->right=helper(root->right,value);
    }
    return root;   
}
TreeNode* insertIntoBST(TreeNode* root, int val) {
    return helper(root,val); 
}
};
