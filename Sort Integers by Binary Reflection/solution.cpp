class Solution {
public:

    int reflect(int x){
        int rev = 0;
        while(x>0){
            rev = (rev<<1) | (x&1);
            x = x>>1;
        }
        return rev;
    }


    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>> v;
        for(int i :nums){
            v.push_back({reflect(i),i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto &i:v){
            ans.push_back(i.second);
        }
        return ans;
    }
};