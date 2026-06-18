class Solution {
public:
        vector<vector<int>> ans;
        vector<bool> isVisited;

    void solve(vector<int>&nums , vector<int> &perm){
        if(perm.size()==nums.size()){
            ans.push_back(perm);
            return;
        }

        for(int i = 0;i<nums.size();i++){
            if(!isVisited[i]){

                isVisited[i] = true;
                perm.push_back(nums[i]);
                solve(nums,perm);
                isVisited[i] = false;
                perm.pop_back();


            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<int> perm;
        
        isVisited.assign(nums.size()+1,false);

        solve(nums,perm);
        return ans;

    }
};