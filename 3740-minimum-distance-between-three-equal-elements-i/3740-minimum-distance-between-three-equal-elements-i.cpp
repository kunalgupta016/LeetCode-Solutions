class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        if(n<3) return -1;
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size()>=3){
                int size = mp[nums[i]].size();
                int distance = mp[nums[i]][size-1] - mp[nums[i]][size-3];
                if(ans==-1){
                    ans = distance;
                }
                else{
                    ans = min(ans,distance);
                }


            }

        }

        if(ans!=-1) ans = ans*2;
        return ans;


    }
};