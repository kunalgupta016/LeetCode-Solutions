class Solution {
public:

    long long find(vector<int>&piles,long long mid){

        long long cnt = 0;
        for(int i = 0;i<piles.size();i++){

            long long kitna = (long long)piles[i]/mid;
            if(piles[i]%mid !=0){
                kitna++;
            }

            cnt+=kitna;

        }
        return cnt;

    }


    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        if(h<n) return -1;
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low<=high){

            long long mid = low+(high-low)/2;
            long long cntHours = find(piles,mid);
            if(cntHours>h){

                low = mid+1;

            }else{
                high = mid-1;
            }

        }

        return (int)low;

    }
};