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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int maxWidth = 0;
        long long res = 1;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){

            long long size = q.size();
            long long start = q.front().second;
            long long end = q.back().second;
            res = max(res,end-start+1);
            for(int i = 0 ;i<size;i++){
                auto temp = q.front();
                q.pop();
                long long idx = temp.second - start;
                if(temp.first->left!=NULL){
                    q.push({temp.first->left,(long long )2*idx+1});
                }
                if(temp.first->right!=NULL){
                    q.push({temp.first->right,(long long )2*idx+2});
                }
                

            }
          
        

        }
          return res;
    }
};