class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int>mp;
        for(long long i = 1;i<=cbrt(n);i++){
            long long a = i*i*i;
            for(long long j = i;j<=cbrt(n);j++){
                long long sum = a+j*j*j;
                if(sum>n){
                    break;
                }
                mp[sum]++;
            }
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};