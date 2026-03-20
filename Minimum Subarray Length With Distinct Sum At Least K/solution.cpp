class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int size =  100001;
        int sum  = 0;
        int mp[100001] = {0};
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]==1){
                sum+=nums[j];
            }
            while(sum>=k){
                size = min(size,j-i+1);
                if(mp[nums[i]]==1){
                    sum-=nums[i];
                    
                }
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        if(size!=100001){
            return size;
        }
        else{
            return -1;
        }
    }
};