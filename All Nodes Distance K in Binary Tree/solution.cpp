/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,TreeNode*> parent;
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto Node = q.front();
            q.pop();
            if(Node->left){
                parent[Node->left->val] = Node;
                q.push(Node->left);
            }
            if(Node->right){
                parent[Node->right->val] = Node;
                q.push(Node->right);
            }

        }

        unordered_map<int,int> visited;
        q.push(target);
        while(k-- && !q.empty()){
            int size = q.size();
            for(int i = 0;i<size;i++){
                auto top = q.front();
                q.pop();
                visited[top->val] = 1;
                if(top->left && !visited[top->left->val]){
                    q.push(top->left);        
                }
                if(top->right && !visited[top->right->val]){
                    q.push(top->right);        
                }
                if(parent[top->val] && !visited[parent[top->val]->val]){
                    q.push(parent[top->val]);        
                }
            }
            
        }


        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;

    }
};