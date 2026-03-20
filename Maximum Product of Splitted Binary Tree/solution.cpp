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

    const int mod = 1e9+7;
    long long ans = 0;
    long long total = 0;

    long long  dfs(TreeNode* root){
        if(!root) return 0;
        return root->val+dfs(root->left)+dfs(root->right);
    }

    long long maxi(TreeNode* root){
        if(!root) return 0;
        long long s =  root->val + maxi(root->left) + maxi(root->right);
        ans = max(ans,(total-s)*s);
        return s;

    }



    int maxProduct(TreeNode* root) {
        total = dfs(root);
         maxi(root);
        return ans%mod;
    }
};