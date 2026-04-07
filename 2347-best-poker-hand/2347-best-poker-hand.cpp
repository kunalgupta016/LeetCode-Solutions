class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int> mp;
        for(auto it:suits){
            mp[it]++;
        }
        if(mp.size()==1){
            return "Flush";
        }
        map<int,int> mp1;
        for(auto it1:ranks){
            mp1[it1]++;
        }
        bool p = false;
        for(auto it2:mp1){
            if(it2.second>=3){
                return "Three of a Kind";

            }else if(it2.second==2){
                p = true;

            }
        }
        if(p) return "Pair";
        return "High Card";
    }
};