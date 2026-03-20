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

    

    void dfs(TreeNode* root,int target,vector<vector<int>>&res,vector<int> &ans){
        
        if(!root) return;
        ans.push_back(root->val);
    
        if(!root->left && !root->right && target==root->val){
            res.push_back(ans);
        }
        dfs(root->left,target-root->val,res,ans);
        dfs(root->right,target-root->val,res,ans);
        ans.pop_back();



    }


    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        dfs(root,target,res,ans);
        return res;


    }
};