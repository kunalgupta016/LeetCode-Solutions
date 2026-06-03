class Solution {
public:

    void solve(int index,vector<vector<int>>&output,vector<int>&ans,vector<int>&nums,int k ,int n){

        if(n==0 && ans.size()==k){
            output.push_back(ans);
            return ;
        }

        for(int i = index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            if(nums[i]>n || ans.size()==k ){
                break;
            }
            int ele = nums[i];
            ans.push_back(ele);
            solve(i+1,output,ans,nums,k,n-ele);
            ans.pop_back();

        }


    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> output;
        vector<int> ans;
        solve(0,output,ans,nums,k,n);
        return output;
    }
};