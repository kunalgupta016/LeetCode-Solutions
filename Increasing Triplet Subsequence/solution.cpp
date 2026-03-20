class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i = INT_MAX;
        int j = INT_MAX;
        for(int num : nums){
            if(num<=i) i = num;
            else if(num<=j) j = num;
            else return true;
        }
        return false;
    }
};