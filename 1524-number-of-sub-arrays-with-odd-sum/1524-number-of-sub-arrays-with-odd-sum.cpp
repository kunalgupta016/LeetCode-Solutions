class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long sum = 0;
        int MOD = 1000000007;
        long long cnt = 0;
        for(int i :arr){
            sum+=i;
            cnt+=(sum%2)%MOD;

        }
        cnt+=(((arr.size()-cnt)%MOD)*cnt)%MOD;
        return (int)cnt%MOD;

    }
};