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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*> mp;
        set<int> st;
        for(int i = 0;i<descriptions.size();i++){
            TreeNode* parent;
            TreeNode* child;
            if(mp.contains(descriptions[i][0])){
                parent = mp[descriptions[i][0]];
            }else{
                parent = new TreeNode(descriptions[i][0]);
                mp[descriptions[i][0]] = parent;
            }

            if(mp.contains(descriptions[i][1])){
                child = mp[descriptions[i][1]];
                st.insert(descriptions[i][1]);
            }else{
                child = new TreeNode(descriptions[i][1]);
                mp[descriptions[i][1]] = child;
                st.insert(descriptions[i][1]);
            }
            if(descriptions[i][2] == 1){
                parent->left = child;
            }else{
                parent->right = child;
            }
        }

         for(int i=0;i<descriptions.size();i++){
            if(!st.contains(descriptions[i][0])){
                return mp[descriptions[i][0]];
            }
        }

        return nullptr;

    }
};