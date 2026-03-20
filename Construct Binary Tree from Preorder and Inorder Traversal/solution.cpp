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

    TreeNode* build(vector<int> preorder, vector<int> inorder,int &index , int inorderStart, int inorderEnd , unordered_map<int,int> &mp,int n ){

        if(index == n || inorderStart > inorderEnd){
            return NULL;
        }
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int position = mp[element];
        // left
        root->left = build(preorder,inorder,index,inorderStart,position-1,mp,n);
        root->right = build(preorder,inorder,index,position+1,inorderEnd,mp,n);
        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        int len = inorder.size();
        for(int i = 0 ; i<len ; i++){
            mp[inorder[i]] = i;
        }
        int PreOrderIndex = 0;

        TreeNode* ans = build(preorder,inorder,PreOrderIndex,0,len-1,mp,len);
        return ans;
    }
};