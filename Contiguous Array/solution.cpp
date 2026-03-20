class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxi =0;
        map<int,int> mp;
        int cnt = 0;
        mp[0] = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }else{
                cnt--;
            }
            if(!mp.count(cnt)){
                mp[cnt] = i;
            }
            else{
                maxi = max(maxi,i-mp[cnt]);
            }
        }
        return maxi;
    }
};