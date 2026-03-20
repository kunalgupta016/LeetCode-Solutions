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

    bool SI(vector<int> nums){
        for(int i= 0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }

     bool SD(vector<int> nums){
        for(int i= 0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                return false;
            }
        }
        return true;
    }

    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        vector<int> vec;
        while(!q.empty()){
            vec.clear();
            int size = q.size();
            for(int i= 0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(  ((level%2==1) && (node->val %2 ==1)) ||  ((level%2==0) && (node->val %2 ==0))    ){
                    return false;
                }
                vec.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }

            if(level&1){
                if(!SD(vec)){
                    return false;
                }
                level++;
            }
            else{
                if(!SI(vec)){
                    return false;
                }
                level++;
            }

        }
        return true;
    }
};