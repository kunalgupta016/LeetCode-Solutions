class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = 0 , maxIndex = 0;
        int n = nums.size();
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]<minNum){
                minNum = nums[i];
                minIndex = i;
            }
            if(nums[i]>maxNum){
                maxNum = nums[i];
                maxIndex = i;
            }
            
        }

        int left = min(minIndex,maxIndex);
        int right = max(minIndex ,maxIndex);

        int front = right+1;
        int back = n-left;

        int frontBack = (left+1)+(n-right);
        return min({front,back,frontBack});


    }
};  