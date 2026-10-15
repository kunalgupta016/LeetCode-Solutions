class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int num:nums1){
            int idx = -1;
            for(int i = 0;i<nums2.size();i++){
                if(nums2[i]==num){
                    idx = i;
                    break;
                }
            }
            bool hai = false;
            for(int i = idx+1;i<nums2.size();i++){
                if(nums2[i]>num){
                    ans.push_back(nums2[i]);
                    hai = true;
                    break;
                }
            }

            if(hai==false){
                ans.push_back(-1);
            }




        }
        return ans;
    }
};