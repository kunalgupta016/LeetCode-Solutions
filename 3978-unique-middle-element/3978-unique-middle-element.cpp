class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int middle = nums.size()/2;
        if(mp[nums[middle]]==1){
            return true;
        }else{
            return false;
        }
    }
};