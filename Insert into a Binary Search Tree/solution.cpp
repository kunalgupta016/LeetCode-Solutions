/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) {
            TreeNode* node = new TreeNode(val);
            return node;
        }
        TreeNode* crr = root;
        while (true) {
            if (val > crr->val) {
                if (!crr->right) {
                    TreeNode* node = new TreeNode(val);
                    crr->right = node;
                    break;
                } else {
                    crr = crr->right;
                }
            } else {
                if (!crr->left) {
                    TreeNode* node = new TreeNode(val);
                    crr->left = node;
                    break;
                } else {
                    crr = crr->left;
                }
            }
        }

        return root;
    }
};