class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {

        sort(in.begin(),in.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });

        int n = in.size();
        vector<int> first = in[0];
        int f = first[0];
        int e = first[1];
        int cnt = 0;
        for(int i = 1;i<n;i++){

            vector<int> aarha = in[i];
            int phla = aarha[0];
            int dusra = aarha[1];

            if(phla<e){
                cnt++;
            }else{
                f = phla;
                e = dusra;
            }

        }
        return cnt;


    }
};