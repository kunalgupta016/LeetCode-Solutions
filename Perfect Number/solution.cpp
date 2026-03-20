class Solution {
public:

    vector<int> divisors(int n){
        vector<int> ans;
        for(int i =1;i<=sqrt(n);i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i){
                    ans.push_back(n/i);
                }
            }
            
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }



    bool checkPerfectNumber(int num) {
        vector<int> ans = divisors(num);
        int sum = 0;
        for(int i : ans){
            cout<<i<<endl;
            sum+=i;
        }
        sum = sum-num;
        return (sum==num)?true:false;
    }
};