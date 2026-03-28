class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mpp;
        for(auto it:stones){
            mpp[it]++;
        }
        int ans = 0;
        for(auto it:mpp){
            if(jewels.find(it.first)!=string::npos){
                ans+=it.second;
            }
        }
        return ans;
    }
};