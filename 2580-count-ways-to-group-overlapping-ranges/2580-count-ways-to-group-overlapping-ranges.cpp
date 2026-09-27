class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        // 1. Ranges को सॉर्ट करना (बिल्कुल सही है)
        sort(ranges.begin(), ranges.end());
        vector<vector<int>> ans;
        
        for(int i = 0; i < ranges.size(); i++){
            int x = ranges[i][0];
            int y = ranges[i][1];

            if(ans.empty() ){
                ans.push_back(ranges[i]);
            }
            else if(ans.back()[1] >= x ){
                if(ans.back()[1] <= y){
                    ans.back()[1] = y;
                }
            }
            else{
                ans.push_back(ranges[i]);
            }
        }

        
        long long final_ans = 1;
        long long mod = 1e9 + 7; 
        
        for(int i = 0; i < ans.size(); i++) {
            final_ans = (final_ans * 2) % mod;
        }

        return final_ans;
    }
};
