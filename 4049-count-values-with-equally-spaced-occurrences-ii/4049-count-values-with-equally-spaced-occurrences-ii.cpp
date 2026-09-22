class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);

        }
        int cnt = 0;
        for(auto it:mp){
            int val = it.first;
            vector<int> indexed = it.second;
            if(indexed.size()>=3 ){
                int s = indexed[1]-indexed[0];
                bool allRight = true;
                for(int i = 2;i<indexed.size();i++){
                    if( (indexed[i]-indexed[i-1]) !=s ){
                        allRight = false;
                        break;
                    }
                }
                if(allRight){
                    cnt++;
                }

            }
        }
        return cnt;
    }
};