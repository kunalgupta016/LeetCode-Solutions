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

    int dfs(TreeNode* node,int crr){
        if(node==NULL) return 0;
        crr = crr*2+node->val;
        if(!node->left && !node->right) return crr;
        return dfs(node->left,crr)+dfs(node->right,crr);
    }

    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
};