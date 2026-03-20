class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int cnt = 0;
        for(auto it:mp){
            if(it.second>1) cnt++;
        }
        int indx = 0;
        if(cnt==0) return 0;
        int ans = 0;
        while(indx<n){
            ans++;
            for(int k = 0;k<3 && indx<n ;indx++,k++){
                int val = nums[indx];
                if(mp[val]==2) cnt--;
                mp[val]--;
            }
            if(cnt==0) return ans;
        }
        return ans;
        
    }
};