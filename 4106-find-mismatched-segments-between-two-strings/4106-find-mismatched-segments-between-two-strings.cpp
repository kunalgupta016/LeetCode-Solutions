class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int n = s1.size();
        int i = 0;
        while(i<n){
            if(s1[i]==s2[i]){
                i++;
                continue;
            }
            int j = i;
            while(j<n && s1[j]!=s2[j]){
                j++;
            }
            vector<string> v;
            v.push_back(s1.substr(i,j-i));
            v.push_back(s2.substr(i,j-i));
            ans.push_back(v);
            i = j;
        }
        return ans;
    }
};