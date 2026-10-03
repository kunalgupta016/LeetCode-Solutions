class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(),in.end(),[](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        });
        // sort(in.begin(),in.end());
        int n = in.size();

        vector<int> a;
        a.push_back(in[0][0]);
        a.push_back(in[0][1]);
        ans.push_back(a);

        for(int i = 1;i<n;i++){

            if(ans.back()[1]>=in[i][0]){
                if(ans.back()[1]<=in[i][1]){
                    ans.back()[1] = in[i][1];
                }
            }
            else{
                vector<int> aa;
                aa.push_back(in[i][0]);
                aa.push_back(in[i][1]);
                ans.push_back(aa);
            }

        }

        return ans;

    }
};