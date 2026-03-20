class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        sort(nums1.begin(),nums1.end());


        int i=0;
        while(i<(m+n) && nums1[i]!=0  ){
            i++;
        }

        if(i<(m+n) && nums1[i]==0){
            int s = i;
            for(int j = 0 ; j<n;j++){
                nums1[s] = nums2[j];
                s++; 
            }
        }
        
        sort(nums1.begin(),nums1.end());

    }
};