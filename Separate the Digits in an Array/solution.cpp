class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]>0){
                st.push(nums[i]%10);
                nums[i] = nums[i]/10;
            }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};