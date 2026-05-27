class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }

        int size = nums.size();
        int div = size/2;

        for(auto it:mp){
            if(it.second &1){
                return false;
            }
        }

        return true;
    }
};