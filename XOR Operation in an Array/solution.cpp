class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> ans;
        for(int i = 0;i<n;i++){
            int p = start+2*i;
            ans.push_back(p);
        }

        int res = 0;
        for(int i = 0;i<ans.size();i++){
            res = res^ans[i];
        }
        return res;

    }
};