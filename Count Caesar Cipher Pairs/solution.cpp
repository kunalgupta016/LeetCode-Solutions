class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string,long long> mp;
        for(auto &w : words){
            int size = w.size();
            string key = "";
            for(int i = 0;i<size;i++){
                int diff = (w[i]-w[0]+26)%26;
                key+=to_string(diff)+"#";
            }
            mp[key]++;
        }
        long long ans = 0;
        for(auto it:mp){
            long long cnt = it.second;
            long long dif = ((cnt)*(cnt-1))/2;
            ans+=dif;
        }
        return ans;
    }
};