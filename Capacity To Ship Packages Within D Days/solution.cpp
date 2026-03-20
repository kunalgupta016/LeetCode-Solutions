class Solution {
public:

    bool solve(vector<int>&weights,int capacity , int days){
        int required = 1;
        int crr = 0;
        for(int w : weights){
            if(crr+w>capacity){
                required++;
                crr = 0;
            }
            crr+=w;
        }
        return required<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(),weights.end(),0);
        while(left<right){
            int mid = left+(right-left)/2;
            if(solve(weights,mid,days)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};