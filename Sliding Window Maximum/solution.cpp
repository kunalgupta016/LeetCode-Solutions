class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        deque<int> q; // stores indices

        for(int i = 0; i < n; i++) {
            // Step 1: Remove elements smaller than current one from back
            while(!q.empty() && nums[q.back()]<=nums[i]){
                q.pop_back();
            }


            q.push_back(i);
            

            if(q.front()<=i-k){
                q.pop_front();
            }

            if(i>=k-1){
                ans.push_back(nums[q.front()]);
            }

        }

        return ans;
    }
};
