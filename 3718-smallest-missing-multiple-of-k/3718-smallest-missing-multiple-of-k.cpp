class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int i = 1;
        while(true){
            if(mp.find(k*i)==mp.end()){
                break;
            }
            i++;

        }
        return i*k;

    }
};