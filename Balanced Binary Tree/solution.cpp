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
int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return 1;
        if (!root->right)
            return 1 + maxDepth(root->left);
        if (!root->left)
            return 1 + maxDepth(root->right);
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int leftH = maxDepth(root->left);
        int rightH = maxDepth(root->right);
        if(abs(leftH-rightH)>1){
            return false;
        }      
        return isBalanced(root->left) && isBalanced(root->right);
    }
};