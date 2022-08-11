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
private:
    bool isValid(TreeNode* root, long long min, long long max)
    {
        if(!root)
            return true;
        return (root->val > min && root->val < max) && isValid(root->left, min, root->val) && isValid(root->right, root->val, max);
    }
    
public:
    bool isValidBST(TreeNode* root) 
    {
        if(!root)
            return true;
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};