class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> prefix(n);
        prefix[0] = nums[0];
        long long maxi = prefix[0];
        for(long long i = 1;i<n;i++){
            if(maxi<nums[i]){
                maxi = nums[i];
            }
            prefix[i] = maxi;
        }

        vector<long long> arr(n);
        for(long long i = 0;i<n;i++){
            arr[i] = gcd(nums[i],prefix[i]);
        }
        sort(arr.begin(),arr.end());
        vector<long long> brr;
        n = arr.size();
        long long i = 0;
        while(i<n/2){
            brr.push_back(gcd(arr[i],arr[n-i-1]));
            i++;
        }
        long long sum = accumulate(brr.begin(),brr.end(),0LL);
        return sum;
    }
};