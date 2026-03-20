class Solution {
public:
    

    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> arr;
        stack<long long> st;
        st.push(nums[0]);
        for(int i = 1;i<nums.size();i++){
            long long num = nums[i];
            while(!st.empty() && st.top()==num){
                st.pop();
                num = num*2;
            }
            st.push(num);
        }
        
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(),arr.end());
        

        return arr;
    }
};