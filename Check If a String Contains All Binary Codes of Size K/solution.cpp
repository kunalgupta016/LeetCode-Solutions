class Solution {
public:

    // void solve(unordered_set<string>&st,string a,int k){
    //     if(k==0){
    //         st.insert(a);
    //         return;
    //     }
    //     // 0
    //     a.push_back('0');
    //     solve(st,a,k-1);
    //     // 2
    //     a.pop_back();
    //     a.push_back('1');
    //     solve(st,a,k-1);


    // }

    bool hasAllCodes(string s, int k) {
       unordered_set<string> st; 
       for(int i = 0;i+k<=s.size();i++){
        st.insert(s.substr(i,k));
       }
       return st.size()==(1<<k);
    }
};