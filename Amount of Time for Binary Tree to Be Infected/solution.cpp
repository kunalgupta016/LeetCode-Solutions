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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,TreeNode*> parent;
        unordered_map<int,TreeNode*> mp;
        
        queue<TreeNode*> q;
        q.push(root);
        mp[root->val] = root;
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            if(top->left){
                parent[top->left->val] = top;
                mp[top->left->val] = top->left;
                q.push(top->left);
            }
            if(top->right){
                parent[top->right->val] = top;
                mp[top->right->val] = top->right;
                q.push(top->right);
            }
        }

        unordered_map<int,int> visited;
        q.push(mp[start]);
        int cnt = -1;
        visited[start] = 1;
        while(!q.empty()){

            int size = q.size();
            cnt++;
            for(int i = 0;i<size;i++){
                auto top = q.front();
                q.pop();
                
                if(top->left && !visited[top->left->val]){
                    visited[top->left->val] = 1;
                    q.push(top->left);        
                }
                if(top->right && !visited[top->right->val]){
                    visited[top->right->val] = 1;
                    q.push(top->right);        
                }
                if(parent[top->val] && !visited[parent[top->val]->val]){
                    TreeNode* p = parent[top->val];
                    if(!visited[p->val]){
                        visited[p->val] = 1;
                        q.push(parent[top->val]);        

                    }
                    
                }
            }
            


        } 

        return cnt;
    }
};