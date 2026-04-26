class Solution {
public:
    bool validDigit(int n, int x) {
        set<int> st;
        int l =-1;
        while(n!=0){
            int d = n%10;
            st.insert(d);
            n/=10;
            l=d;
        }
        if(st.count(x) && l!=x) return true;
        return false;
    }
};