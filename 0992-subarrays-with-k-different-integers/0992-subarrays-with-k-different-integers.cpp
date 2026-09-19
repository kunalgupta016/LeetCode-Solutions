class Solution {
public:

    int atmost(vector<int>&nums,int k){
        if(k==0) return 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        int l = 0;
        int r = 0;
        int res = 0;
        while(r<n){
            

            mp[nums[r]]++;

            while(l<r && mp.size()>k){

                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;

            }

            res+=r-l+1;

            r++;


        }
        return res;

    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        int ans1 = atmost(nums,k);
        int ans2 = atmost(nums,k-1);
        return ans1-ans2;



    }
};