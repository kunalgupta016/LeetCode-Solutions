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
            if(indexed.size()==3 ){
                if( (indexed[1]-indexed[0] ) == (indexed[2]-indexed[1] )  ){
                    cnt++;
                }

            }
        }
        return cnt;
    }
};