class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int> a;
        int cnt = 0;
        vector<int> ans;
        for(int i = 0;i<A.size();i++){
            a[A[i]]++;
            a[B[i]]++;
            if(a[A[i]]==2){
                cnt++;
            }
            if(A[i]!=B[i] && a[B[i]]==2) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    
    }
};