class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        using ll = long long;
        for(int i =0;i<nums.size();i++) nums[i] = (ll)abs(nums[i]);
        int m1 = -1e5;
        int m2 = -1e5;

        for(int x:nums){
            if(x>m1) m2 = m1,m1=x;
            else if(x>m2) m2 = x;
        }
        return (ll)m1*(ll)m2*1e5;
        

    }
};