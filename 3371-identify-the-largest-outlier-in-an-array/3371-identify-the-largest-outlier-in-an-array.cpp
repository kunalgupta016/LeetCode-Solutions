class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        map<int,int> mp;
        int sum = 0;
        for(int i:nums){
            mp[i]++;
            sum+=i;
        }
        int ans = INT_MIN;

        for(int i = 0;i<nums.size();i++){
            int rem = sum-nums[i];

            if(rem%2==0){

                if(mp.count(rem/2)){
                    if(mp[rem/2]>1){
                        ans = max(ans,nums[i]);
                    }
                    else if(mp[rem/2]==1){
                        if(nums[i]!=(rem/2)){
                            ans = max(ans,nums[i]);
                        }
                    }
                }


            }
        }

        return ans;    

    }
};