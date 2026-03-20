class Solution {
public:

    int solve(int n ){
        int ans = 0;
        while(n>0){
            ans  += n%10;
            n = n/10;
        }
        return ans;
    }

    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        for(int i = 1;i<=n;i++){
            int num = solve(i);
            mp[num]++;
        }
        int maxi = 0;

        for(auto it:mp){
            maxi = max(maxi , it.second);
        }

        int cnt = 0;
        for(auto it:mp){
            if(it.second == maxi) cnt++;
        }
        return cnt;
    }
};