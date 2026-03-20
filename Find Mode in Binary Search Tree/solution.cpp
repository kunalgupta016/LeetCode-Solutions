class Solution {
public:
    void inorder(TreeNode* root, unordered_map<int,int>& mp) {
        if (!root) return;
        inorder(root->left, mp);
        mp[root->val]++;
        inorder(root->right, mp);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        vector<int> ans;
        if (!root) return ans;

        inorder(root, mp);

        int maxi = 0;
        for (auto &p : mp) {
            maxi = max(maxi, p.second);
        }

        for (auto &p : mp) {
            if (p.second == maxi) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};
