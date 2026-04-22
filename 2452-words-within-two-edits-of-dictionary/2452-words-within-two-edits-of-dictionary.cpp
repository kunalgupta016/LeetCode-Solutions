class Solution {
public:
    vector<string> twoEditWords(vector<string>& query, vector<string>& dictionary) {
        vector<string> v;
        for(int i = 0;i<query.size();i++){
            int ans = INT_MAX;
            for(int j = 0;j<dictionary.size();j++){
            int res = 0;
            for(int k = 0;k<dictionary[j].size();k++){
                if(query[i][k]!=dictionary[j][k]){
                    res++;
                }
            }
            ans = min(ans,res);

            }
            if(ans<=2){
                v.push_back(query[i]);
            }
        }
        return v;

    }
};