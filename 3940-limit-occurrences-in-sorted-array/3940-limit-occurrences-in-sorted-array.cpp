class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i :nums){
            mp[i]++;
        }
        vector<int> ans;
        for(auto it:mp){

            int val = it.first;
            int freq = it.second;
            if(freq<=k){
                for(int i=0;i<freq;i++){
                    ans.push_back(val);
                }
            }
            else{
                for(int i =0;i<k;i++){
                    ans.push_back(val);
                }
            }

        }
        return ans;
    }
};