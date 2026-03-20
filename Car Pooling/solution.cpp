class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001,0);
        for(auto i:trips){
            int num = i[0];
            int f = i[1];
            int t = i[2];
            diff[f]+=num;
            diff[t]-=num;
        }
        vector<int> ans(1001);
        ans[0] = diff[0];
        
        for(int i = 1;i<=1000;i++){
            ans[i] = ans[i-1] + diff[i];
        }
        for(int i = 0;i<=1000;i++){
            if(ans[i]>capacity){
                return false;
            }
        }
        return true;

    }
};