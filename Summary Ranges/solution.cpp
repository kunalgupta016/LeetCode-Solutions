class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.empty()) return ans;
        int s = nums[0];
        for(int i =1;i<=nums.size();i++){
            
            if(i==nums.size() || nums[i]!=nums[i-1]+1){
                if(s==nums[i-1]){
                    ans.push_back(to_string(s));
                }
                else{
                    ans.push_back(to_string(s)+"->"+to_string(nums[i-1]));
                }
                if(i<nums.size()) s = nums[i];
            }
           


        }
        return ans;
    }
};