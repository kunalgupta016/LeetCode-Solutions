class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long Nsum = 0;
        long long Psum = 0;

        // vector<long long> nums1;
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(),nums.end());
        if(n%2!=0){

            int idx = (n-1)/2;
            for(int i = 0;i<idx;i++){
                // cout<<"nums[i] = "<<nums[i]<<" ";
                Nsum+=nums[i];
            }
            // cout<<endl;

            for(int i = idx;i<n;i++){
                // cout<<"nums[i] = "<<nums[i]<<" ";
                Psum+=nums[i];
            }
            // cout<<endl;

        }
        else{
            int idx = (n-1)/2;
            for(int i = 0;i<idx+1;i++){
                // cout<<"nums[i] = "<<nums1[i]<<" ";
                Nsum+=nums[i];
            }
            // cout<<endl;

            for(int i = idx+1;i<n;i++){
                // cout<<"nums[i] = "<<nums1[i]<<" ";
                Psum+=nums[i];
            }
            // cout<<endl;
        }
        return Psum-Nsum;
    }
};