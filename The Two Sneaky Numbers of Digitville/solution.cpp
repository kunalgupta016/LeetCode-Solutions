class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> ans;
        for(auto &i:mp){
            if(i.second==2){
                ans.push_back(i.first);
            }
            if(ans.size()==2){
                break;
            }
        }
        return ans;
    }
};