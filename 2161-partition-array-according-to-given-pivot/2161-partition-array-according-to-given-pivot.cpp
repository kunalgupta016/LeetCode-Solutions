class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        vector<int> large;
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }else if(nums[i]>pivot){
                large.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i:small){
            ans.push_back(i);
        }

        int freq = mp[pivot];
        for(int i = 0;i<freq;i++){
            ans.push_back(pivot);
        }

        for(int i:large){
            ans.push_back(i);
        }
        return ans;
    }
};