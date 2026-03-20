class Solution {
public:

static bool custom(pair<int,char>&a , pair<int,char>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }   
        
        vector<pair<int,char>> res;
        for(auto &it:mp){
            res.push_back({it.second,it.first});
        }

        sort(res.begin(),res.end(),custom);

        string ans = "";
        for(auto &it:res){
            ans.append(it.first,it.second);
        }
        return ans;



     return ans;

    }
};