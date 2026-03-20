class Solution {
public:

    void reverse(string &s , int st , int e){
        int start = st;
        int end = e-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }
    }

    string reverseStr(string s, int k) {
        int n = s.length();
        int i =0;
        int windowSize = 2*k;
        while(i<n){
            if(i+k<=n){
                reverse(s,i,i+k);
                
            }
            else{
                reverse(s,i,n);
            }
            
                i = i+windowSize;       
        }
        return s;
    }
};