class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            unordered_set<int> odd;
        unordered_set<int> even;
            for(int j = i;j<nums.size();j++){
                if(nums[j]&1){
                    odd.insert(nums[j]);
                }else{
                    even.insert(nums[j]);
                }
                if(odd.size()==even.size()){
                cnt = max(cnt,j-i+1);
            }
            }
            
        }
    return cnt;
    }
};