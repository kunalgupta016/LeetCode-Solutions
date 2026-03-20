class Solution {
public:

    unordered_map<int,vector<int>> mp;

    Solution(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            int val = nums[i];
            mp[val].push_back(i);
        }
    }
    
    int pick(int target) {
        int size = mp[target].size();
        if(size==1){
            return mp[target][0];
        }
        else{
            int i = rand()%size;
            return mp[target][i];
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */