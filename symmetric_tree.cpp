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
    bool solve(TreeNode* l1, TreeNode* l2)
    {
        if(!l1 && !l2)
            return true;
        if(!l1 && l2 || l1 && !l2)
            return false;
        if(l1->val != l2->val)
            return false;
        return solve(l1->left, l2->right) && solve(l1->right, l2->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        return solve(root->left, root->right);
    }
};