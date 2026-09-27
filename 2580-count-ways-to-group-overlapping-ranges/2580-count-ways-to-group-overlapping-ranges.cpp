class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        int groups = 0;
        int maxEnd = -1;
        long long ans = 1;
        const int MOD = 1e9 + 7;

        for(int i = 0;i<ranges.size();i++){

            
            int start = ranges[i][0];
            int end = ranges[i][1];

            if(start>maxEnd){
                groups++;
                ans = (ans*2)%MOD;
            }
            maxEnd = max(maxEnd,end);

        }

        // for(int i = 0;i<ans.size();i++){
        //     cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        // }

        return ans;

    }
};