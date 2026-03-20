class Solution {
public:
void solve(vector<vector<int>>&ans , vector<int>output,vector<int>&nums,int i){
        
            ans.push_back(output);
            
        
        for(int j = i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            output.push_back(nums[j]);
            solve(ans,output,nums,j+1);
            output.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> output;
        vector<vector<int>> ans;
        int indx = 0;
        solve(ans,output,nums,indx);
       
        return ans;
    }
};