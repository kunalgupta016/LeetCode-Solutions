class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string end = strs[n-1];
        int minSize = min(first.size(),end.size());
        for(int i = 0 ;i<minSize ; i++){
            if(first[i]!=end[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};