class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(is_sorted(s.begin(),s.end())){
            return 0;
        }
        if(n==2) return -1;
        char mn = *min_element(s.begin()+1,s.end()-1);
        char mx = *max_element(s.begin()+1,s.end()-1);

        if(s[0]<=s[n-1] && (mn>=s[0] || mx<=s[n-1])) return 1;
        if(s[n-1]<mn && s[0]>mx){
            return 3;
        }
        return 2;

    }
};