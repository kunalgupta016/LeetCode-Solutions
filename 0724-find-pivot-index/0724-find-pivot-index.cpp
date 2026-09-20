class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0;i<n;i++){

            // left
            int j = i-1;
            int sumL = 0;
            while(j>=0){
                sumL+=nums[j];
                j--;
            }


            int k = i+1;
            int sumR = 0;
            while(k<n){
                sumR+=nums[k];
                k++;
            }

            if(sumL==sumR){
                return i;
            }


        }

        return -1;
    }
};