class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i:nums){
            mpp[i]++;
        }
        int ans = 0;
        for(auto it:mpp){
            if(it.second==2){
                ans = ans^it.first;
            }
        }
        return ans;
    }
};