class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int cnt = 0;
        for(int i:nums){
            if(i%2==0 && i%3==0) {
                sum+=i;
                cnt++;
            }
        }
        if(cnt==0) return 0;
        return sum/cnt;
        
    }
};