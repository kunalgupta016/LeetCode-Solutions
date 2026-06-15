class Solution {
public:

    long long checkingSpeed(vector<int>&piles,long long h){
        long long cnt = 0;
        for(int i :piles){
            cnt+=ceil((double)i/h);
        }
        return cnt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int s = 1;
        int e = maxi;
        int ans = 0;
        while(s<=e){
            long long mid = s+(e-s)/2;
            if(checkingSpeed(piles,mid)>h){
                s = mid+1;
            }else{
                e = mid-1;
                // ans = mid;
            }
        }
        return (int)s;
    }
};