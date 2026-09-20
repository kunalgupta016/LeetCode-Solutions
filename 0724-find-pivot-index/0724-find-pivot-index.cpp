class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> sumL(n),sumR(n);

        sumL[0] = nums[0];
        sumR[n-1] = nums[n-1];

        for(int i = 1;i<n;i++){

            sumL[i] = sumL[i-1] + nums[i];

        }

        for(int i = n-2;i>=0;i--){

            sumR[i] = sumR[i+1] + nums[i];

        }

        for(int i = 0;i<n;i++){
            if(sumL[i]==sumR[i]) return i;
        }
        return -1;
        

    }
};