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


    TreeNode* helper(TreeNode* node,vector<TreeNode*>&result,set<int>&st,bool isRoot )
{
    if(node==NULL) return NULL;
    bool deleteKrnaHaiKya = (st.find(node->val)!=st.end());
    if(isRoot && deleteKrnaHaiKya==false) result.push_back(node);
    node->left = helper(node->left,result,st,deleteKrnaHaiKya);
    node->right = helper(node->right,result,st,deleteKrnaHaiKya);
    return deleteKrnaHaiKya?NULL:node;
}
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        vector<TreeNode*> result;
        set<int> st;
        for(int i :to_delete){
            st.insert(i);
        }
        helper(root,result,st,true);
        return result;




    }
};