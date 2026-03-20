class Solution {
private:
    void solve(vector<vector<int>>&ans , vector<int>output,vector<int>&nums,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return ;
        }
        // exclude
        solve(ans,output,nums,i+1);
        // include
        int ele = nums[i];
        output.push_back(ele);
        solve(ans,output,nums,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int indx = 0;
        solve(ans,output,nums,indx);
        return ans;
    }
};