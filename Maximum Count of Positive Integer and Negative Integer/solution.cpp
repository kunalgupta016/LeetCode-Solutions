class Solution {

private:
    int binarySearch(vector<int>&nums,int t){
        int s = 0;
        int e = nums.size()-1;
        int r = nums.size();
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]<t) s = mid+1;
            else{
                r = mid;
                e = mid-1;
            }
        }
        return r;
    }

public:
    int maximumCount(vector<int>& nums) {
        int pos = binarySearch(nums,0);
        int neg = nums.size()-binarySearch(nums,1);
        
        return max(neg,pos);
    }

};