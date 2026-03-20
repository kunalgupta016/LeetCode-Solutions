class Solution {
public:

    void solve(int index,vector<vector<int>> &ans,vector<int> &output,vector<int> &nums,int k ,int n){

        if(n==0 && output.size()==k){
            ans.push_back(output);
            return ;
        }

        for(int i  = index;i<nums.size();i++){

            if(i>index && nums[i]==nums[i-1]) continue;
            if(nums[i]>n || output.size()==k){
                break;
            }
            int ele = nums[i];
            output.push_back(ele);
            solve(i+1,ans,output,nums,k,n-ele);
            output.pop_back();


        }




    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> output;
        solve(0,ans,output,nums,k,n);
        return ans;
    }
};