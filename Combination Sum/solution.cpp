class Solution {
public:

    void solve(vector<int>& candidates, int target,int i , vector<int>output,vector<vector<int>>&ans){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(output);
            }
            return;
        }

        // exclude
        solve(candidates,target,i+1,output,ans);
        // include
        int ele = candidates[i];
        if(ele<=target){
            output.push_back(ele);
            target = target-ele;
            solve(candidates,target,i,output,ans);
            
        }
        

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(candidates,target,0,output,ans);
        return ans;
    }
};