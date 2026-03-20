class Solution {
public:

    int BS(vector<int>&nums , int s , int e , int target){
        int mid = s+(e-s)/2;
        int ans=0;
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s= mid+1;
            }
            
        }
        return -1;
    }



    int getPivot(vector<int>& nums,int n){
	
	int s =0;
	int e= n-1;
	int mid = s+(e-s)/2;
	while(s<e){
        mid = s+(e-s)/2;
		if(nums[mid]>=nums[0]){
			s = mid+1;		
		}
		else{
			e = mid;
		}
		
	}
	return s;
}

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums,n);
        if(target >= nums[pivot] && target <= nums[n-1]){
            // second wali me 
            return BS(nums,pivot,n-1,target);
        }
        else{
            // first wali me
            return BS(nums,0,pivot-1,target);
        }
        
    }
};