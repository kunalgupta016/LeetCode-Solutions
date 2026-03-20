class Solution {
public:
    int nextGreaterElement(int n) {
        string ans = to_string(n);
        int i = ans.size()-2;
        while(i>=0 && ans[i]>=ans[i+1]) i--;

        if(i<0) return -1;
        int j = ans.size()-1; 
        while(j>=0 &&ans[j] <= ans[i]  ){
            
            j--;
        } 
        if(j<0) return -1;
        
        swap(ans[i],ans[j]);
        reverse(ans.begin()+i+1,ans.end());
        long long res = stoll(ans);
        return (res >INT_MAX)?-1:(int)res;
    }
};