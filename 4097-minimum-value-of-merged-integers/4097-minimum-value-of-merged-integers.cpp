class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0;i<nums.size()-1;i+=2){

            string f = to_string(nums[i]);
            string s = to_string(nums[i+1]);

            string st = f+s;
            int num = stoi(st);
            ans = min(num,ans);


            
        }
        return ans;
    }
};