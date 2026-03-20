class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n  = nums.size();
        int i = 0;
        long long cnt = 0;
        multiset<long long> st;
        for(int j = 0;j<n;j++){
            st.insert(nums[j]);
            while(!st.empty() && ((*st.rbegin()-*st.begin())*1LL*(j-i+1))>k){
                st.erase(st.find(nums[i]));
                i++;
            }
            cnt+=(j-i+1);
        }
        return cnt;
    }
};