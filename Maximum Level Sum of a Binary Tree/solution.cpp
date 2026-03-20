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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int sum = INT_MIN;
        int level = 0;
        int maxLevel = 0;
        while(!q.empty()){
            int size = q.size();
            int sum1 = 0;
            level++;
            for(int i = 0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                sum1+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum1>sum){
                maxLevel = level;
                sum = sum1;
            }

        }
        return maxLevel;


    }
};