class Solution {
public:
    bool isGood(vector<int>& nums) {
        map<int,int> mp;
        for(int it:nums){
            mp[it]++;
        }

        int n = nums.size();
        auto last = mp.rbegin();

        for(int i  = 1;i<n;i++){
            if(!mp.count(i)){
                return false;
            }
        }

        for(auto it:mp){
            if(it.second==2 && it.first==n-1){
                return true;
            }else if(it.second==2 && !(it.first==n-1)) return false;
        }
        // if(last->second==2){
        //     return true;
        // }
        return false;


    }
};