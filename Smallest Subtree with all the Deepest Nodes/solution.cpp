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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(!root) return NULL;
        unordered_map<TreeNode* , TreeNode*> parent;
        queue<TreeNode* > q;
        q.push(root);
        parent[root] = nullptr;
        vector<TreeNode*> lastl;
        while(!q.empty()){
            int size = q.size();
            lastl.clear();
            for(int i = 0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                lastl.push_back(node);
                if(node->left){
                    parent[node->left] =node;
                    q.push(node->left);
                }
                
                if(node->right){
                    parent[node->right] =node;
                    q.push(node->right);
                }
            }
        }

        unordered_set<TreeNode*> st(lastl.begin(),lastl.end());
        while (st.size() > 1) {
            unordered_set<TreeNode*> next;
            for (auto node : st) {
                next.insert(parent[node]);
            }
            st = next;
        }
        return *st.begin();


    }
};