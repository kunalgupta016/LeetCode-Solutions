class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

        


        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        unordered_set<int> st;
        for(int i:nums1){
            st.insert(i);
        }
        for(int i:nums2){
            if(st.count(i)) return i;
        }

        int f = nums1[0];
        int s = nums2[0];
        int f1 = min(f,s);
        int f2 = max(f,s);
        if(f1==f2){
            return f1;
        }
        return f1*10+f2;
    }
};