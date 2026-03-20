class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        auto s = words;
        int n = s.size();
        sort(s.begin(),s.end());
        vector<vector<string>>ans;
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && s[i][0]==s[j][0]){
                    for(int k=0;k<n;k++){
                        if(k!=i && k!=j && s[i][3]==s[k][0]){
                            for(int m=0;m<n;m++){
                                if(m!=i && m!=j && m!=k && s[m][0]==s[j][3] && s[m][3]==s[k][3]){
                                    ans.push_back({s[i],s[j],s[k],s[m]});
                                }
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};