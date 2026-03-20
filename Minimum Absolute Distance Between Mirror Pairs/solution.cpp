class Solution {
public:
    
    int reverse(int n){
        int temp = 0;
        while(n != 0){
            temp = temp * 10 + (n % 10);
            n /= 10;
        }
        return temp;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mini = INT_MAX;

        for(int i = 0;i<nums.size();i++){
            int val = nums[i];
            if(mp.count(val)){
                mini = min(mini,i-mp[val]);
            }
            mp[reverse(val)] = i;
        }

        

        return (mini == INT_MAX) ? -1 : mini;
    }
};
