class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int i=0;
        int n = nums.size();
        while(i<n){
            if(i+1 < n && nums[i]==nums[i+1]){
                i = i+2;
            }
            else{
                
                    res.push_back(nums[i]);
                    i++;
               
            }
        }
        return res;

    }
};