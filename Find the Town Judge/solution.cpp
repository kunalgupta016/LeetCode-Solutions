class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> in;
        unordered_map<int,int> out;

        for(int i=1;i<=n;i++){
            in[i] = 0;
            out[i] = 0;
        }


        for(int i = 0;i<trust.size();i++){
            int f = trust[i][0];
            int s = trust[i][1];
            out[f]++;
            in[s]++;
        }

        for(auto it:out){
            int f = it.first;
            int s = it.second;
            if(s==0){
                if(in[f]==n-1){
                    return f;                    
                }
            }
        }

        return -1;

    }
};