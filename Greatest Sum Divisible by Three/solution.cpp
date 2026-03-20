class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum =0;
        vector<int> r1,r2;
        for(int x:nums){
            sum+=x;
            if(x%3==1) r1.push_back(x);
            if(x%3==2) r2.push_back(x);
        }
        sort(r1.begin(),r1.end());
        sort(r2.begin(),r2.end());
        int ans = 0;
        int rem = sum%3;
        if(sum%3==0) return sum;
        if(rem==1){
            int op1 = INT_MAX;
            int op2 = INT_MAX;
            if(r1.size()>=1) {
                op1 = r1[0];
            }
            if(r2.size()>=2){
                op2 = r2[0]+r2[1];
            }
            ans =sum -  min(op1,op2);
        }
        else if(rem==2){
            int op1 = INT_MAX;
            int op2 = INT_MAX;
            if(r2.size()>=1) {
                op1 = r2[0];
            }
            if(r1.size()>=2){
                op2 = r1[0]+r1[1];
            }
            ans = sum-min(op1,op2);
        }
        return ans;
    }
};