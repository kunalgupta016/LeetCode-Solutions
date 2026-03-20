class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int cnt = 0;
        for(auto it:mp){
            if(it.second%k==0){
                int times = it.second;
                int val = it.first * times;
                cnt+=val;
            }
        }
        return cnt;
    }
};