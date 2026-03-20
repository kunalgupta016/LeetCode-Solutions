class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return -1;
        }
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto [num,list]:mp){
            if(list.size()<3) continue;
            int id1 = list[0];
            int id2 = list[1];
            int id3 = list[2];
            ans = min(ans, abs(id1 - id2) + abs(id2 - id3) + abs(id3 - id1));
            for(int i = 3;i<list.size();i++){
                id1 = id2;
                id2 = id3;
                id3 = list[i];
                ans = min(ans, abs(id1 - id2) + abs(id2 - id3) + abs(id3 - id1));
            }

        }
        return ans==INT_MAX?-1:ans;

    }
};