class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // number , index
        unordered_map<int,int> mp;
        // mp[2] = 0;
        // mp[7] = 1;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int ele = target - nums[i];
            if(mp.find(ele)!=mp.end()){
                return {i,mp[ele]};
            }


            mp[nums[i]] = i;

        }
        return {-1};

    }
};