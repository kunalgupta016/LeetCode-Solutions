class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> nn;
        // unordered_map<int,int> mp;
        // for(int i = 0;i<nums.size();i++){
        //     mp[nums[i]] = i;
        // }
        
        for(int i:nums){
            if(i>=0){
                nn.push_back(i);
            }
        }
        int size = nn.size();

        // left shift
        if(k==0 || size==0){
            return nums;
        }
        
        k = k%size;
        int s = size-k;
        reverse(nn.begin(),nn.begin()+k);
        reverse(nn.begin()+k,nn.end());
        reverse(nn.begin(),nn.end());

        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i] = nn[j++];
            }
        }

        
        return nums;
    }
};