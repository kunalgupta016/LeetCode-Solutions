class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;

        stack<Node*> st;
        st.push(root);

        while(!st.empty()){
            Node* node = st.top();
            st.pop();

            ans.push_back(node->val);   
 
            for(int i = 0; i < node->children.size(); i++){
                st.push(node->children[i]);
            }
        }

        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};
