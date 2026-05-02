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

    // int cnt = 0;
    long long solve(TreeNode* root,long long target){
        if(!root) return 0;
        long long cnt = 0;
            if(target==root->val) cnt++;
        
        cnt+=solve(root->left,target-root->val);
        cnt+=solve(root->right,target-root->val);
        return cnt;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return solve(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
                
    }
};