class Solution {
public:
int atmost(vector<int> s,int k){
    int l = 0;
        unordered_map<int,int> mp;
        int res = 0;
        int n = s.size();
        for(int r = 0;r<n;r++){
            mp[s[r]]++;
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            
            res +=r-l+1;
            
        
        }
        return res;
}
    int subarraysWithKDistinct(vector<int>& s, int k) {
        return atmost(s,k)-atmost(s,k-1);
    }
};