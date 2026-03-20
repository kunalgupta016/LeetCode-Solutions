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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        map<int,int> mp;
        queue<pair<TreeNode* ,int>> q;
        if(!root) return ans;
        q.push({root,1});
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0 ; i<size ; i++){
                auto temp = q.front();
                q.pop();
                TreeNode* frontNode = temp.first;
                int VD = temp.second;
                mp[VD] = frontNode->val;
                if(frontNode->left) q.push({frontNode->left,VD+1});
                if(frontNode->right) q.push({frontNode->right,VD+1});

            }

        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
