class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,int> f;
        unordered_map<int,int> l;

        for(int i=0;i<nums.size();i++){
            
            int x = nums[i];
            if(f.find(x)==f.end()){
                f[x] = i;
            }
            l[x] = i;

            mp[x]++;
        }
        int maxi = 0;
        for(auto it:mp){
            maxi = max(maxi,it.second);
        }

        int ans = nums.size();

        for(auto it:mp){
            if(it.second==maxi){
                int x = it.first;
                int len = l[x] - f[x]+1;
                ans = min(ans,len);

            }
        }

        return ans;

    }
};