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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(!root) return ans;
        while(!q.empty()){
            int size = q.size();
            int maxValue = INT_MIN;
            for(int i = 0;i<size;i++){
                TreeNode* Node = q.front();
                q.pop();
                if(Node->val>maxValue){
                    maxValue = Node->val;
                }
                if(Node->left) q.push(Node->left);
                if(Node->right) q.push(Node->right);

            }
            ans.push_back(maxValue);
        }
        return ans;
    }
};