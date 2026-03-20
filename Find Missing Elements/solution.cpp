class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = 0;
        int mini = 101;
        unordered_map<int,int> mp;
        for(auto i:nums){
            maxi = max(maxi,i);
            mini = min(mini,i);
            mp[i]++;
        }
        vector<int> ans;
        for(int i= mini+1 ; i<maxi ;i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;

    }
};