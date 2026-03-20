class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int i = 0;
        while(n!=0){
            int digit = n%10;
            int val = digit*(pow(10,i));
            if(val!=0){
                ans.push_back(val);
            }
            
            n/=10;
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};