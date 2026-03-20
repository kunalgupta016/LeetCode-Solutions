class Solution {
public:

    void solve(vector<int>&nums,vector<vector<int>>&ans,int i,vector<int>&output){
        if(i==nums.size()){
            ans.push_back(output);
            return ;
        }

        solve(nums,ans,i+1,output);
        output.push_back(nums[i]);
        solve(nums,ans,i+1,output);

    }

    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        solve(nums,ans,0,output);
        int sum = 0;
        for(auto i :ans){
            int s = 0;
            for(int j:i){
                s = s^j;
            }
            sum+=s;   
        }
        return sum;
    }
};