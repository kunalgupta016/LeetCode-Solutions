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

     TreeNode* build(vector<int> postorder, vector<int> inorder,int &index , int inorderStart, int inorderEnd , unordered_map<int,int> &mp,int n ){

        if(index <0 || inorderStart > inorderEnd){
            return NULL;
        }
        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int position = mp[element];
        // left
        
        root->right = build(postorder,inorder,index,position+1,inorderEnd,mp,n);
        root->left = build(postorder,inorder,index,inorderStart,position-1,mp,n);
        return root;

    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        int len = inorder.size();
        for(int i = 0 ; i<len ; i++){
            mp[inorder[i]] = i;
        }
        int postorderIndex = len-1;

        TreeNode* ans = build(postorder,inorder,postorderIndex,0,len-1,mp,len);
        return ans;

    }
};