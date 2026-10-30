class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        unordered_map<int,int> mp3;

        for(int i :nums1){
            mp1[i]++;
        }
        for(int i :nums2){
            mp2[i]++;
        }
        for(int i :nums3){
            mp3[i]++;
        }
        vector<int> ans;

        for(int i = 1;i<=100;i++){
            int cnt = 0;
            if(mp1.contains(i)){
                cnt++;
            }
            if(mp2.contains(i)){
                cnt++;
            }
            if(mp3.contains(i)){
                cnt++;
            }
            if(cnt>=2){
                ans.push_back(i);
            }

        }
        return ans;
        

    }
};