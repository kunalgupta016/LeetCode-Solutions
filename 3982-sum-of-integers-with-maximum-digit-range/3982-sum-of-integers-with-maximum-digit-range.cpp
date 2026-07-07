class Solution {
public:


    int findRange(int n){
        int maxi = INT_MIN;
        int mini = INT_MAX;
        while(n!=0){
            int digit = n%10;
            maxi = max(maxi,digit);
            mini = min(mini,digit);
            n = n/10;
        }
        return maxi-mini;
    }

    int maxDigitRange(vector<int>& nums) {
        vector<pair<int,int>> rangeToELe;
        for(int number:nums){
            int range = findRange(number);
            // cout<<"Range: "<<range<<"Number: "<<number<<endl;
            rangeToELe.push_back({range,number});
        }

        sort(rangeToELe.rbegin(),rangeToELe.rend());
        int maxRange = rangeToELe[0].first;
        // cout<<"maxRange: "<<maxRange<<endl;
        int sum = 0;
        for(auto it:rangeToELe){
            // cout<<"Value: "<<it.first<<endl;
            if(it.first==maxRange){
                sum+=it.second;
            }else{
                break;
            }
        }
        return sum;

    }
};