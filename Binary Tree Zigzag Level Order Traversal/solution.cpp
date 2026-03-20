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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)  return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool lR = true;
        while(!q.empty()){
            int size  = q.size();
            vector<int> level(size);

            for(int i= 0;i<size;i++){
                TreeNode* value = q.front();
                q.pop();

                int index = (lR)?i:(size-1-i);
                level[index] = value->val;
                if(value->left) q.push(value->left);
                if(value->right) q.push(value->right);


            }
            ans.push_back(level);
            lR = !lR;
        }
        return ans;
    }
};