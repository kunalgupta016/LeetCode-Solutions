class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> mp;
        while(n!=0){
            int dig = n%10;\
            mp[dig]++;
            n/=10;
        }
    
        int mini = INT_MAX;
        int ans = 0;
        for(auto it:mp){
            if(it.second<mini){
                ans = it.first;
                mini = it.second;
            }
        }
        return ans;

    }
};