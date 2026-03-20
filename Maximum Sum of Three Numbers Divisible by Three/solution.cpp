class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> r0,r1,r2;
        for(auto it:nums){
            if(it%3==1) r1.push_back(it);
            else if(it%3==2) r2.push_back(it);
            else r0.push_back(it);
        }

        sort(r1.rbegin(),r1.rend());
        sort(r2.rbegin(),r2.rend());
        sort(r0.rbegin(),r0.rend());

        int ans = 0;
        if(r0.size()>=3) ans = max(ans,r0[0]+r0[1]+r0[2]);
        if(r1.size()>=3) ans = max(ans,r1[0]+r1[1]+r1[2]);
        if(r2.size()>=3) ans = max(ans,r2[0]+r2[1]+r2[2]);

        if(r0.size()>=1 && r1.size()>=1 && r2.size()>=1){
            ans = max(ans,r1[0]+r2[0]+r0[0]);
        }
        
        return ans;

        
    }
};