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

    vector<vector<int>> verticalTraversal(TreeNode* root) {
         map<int, map<int, multiset<int>>> nodes;;  // HD,LVL,DATA
        queue<pair<TreeNode*,pair<int,int>>> q; // NODE ,HD , LEVEL
        vector<vector<int>> ans;
        if(!root)return ans;
        q.push({root,{0,0}});
        
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int HD = temp.second.first;
            int lvl = temp.second.second;

            nodes[HD][lvl].insert(frontNode->val);
            if(frontNode->left){
                q.push({frontNode->left,{HD-1,lvl+1}});
            }
            if(frontNode->right){
                q.push({frontNode->right,{HD+1,lvl+1}});
            }

        }
        
        for(auto i:nodes){
            vector<int> col;
            for(auto q:i.second){
                
                col.insert(col.end(), q.second.begin(), q.second.end());
                
            }
            
            ans.push_back(col);
        }
        return ans;

    }
};