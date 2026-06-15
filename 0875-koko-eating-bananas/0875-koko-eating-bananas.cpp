class Solution {
public:

    int checkingSpeed(vector<int>&piles,int h){
        int cnt = 0;
        for(int i :piles){
            cnt+=(i+h-1)/h;
        }
        return cnt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int s = 1;
        int e = maxi;
        int ans = 0;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(checkingSpeed(piles,mid)>h){
                s = mid+1;
            }else{
                e = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};