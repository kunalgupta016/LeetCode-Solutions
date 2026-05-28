class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long sum = 0;
        set<int> st;
        for(int num:nums){
            if(!st.contains(num) && num<=k){
                k++;
                sum+=num;
            }
            st.insert(num);
        }
        long long res = (long long)(1+k)*k/2-sum;
        return res;
    }
};