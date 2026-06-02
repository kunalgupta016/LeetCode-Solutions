class Solution {
public:

    int solve(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration){

        int mini = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            mini = min(mini,landStartTime[i]+landDuration[i]);
        }

        int ans = INT_MAX;
        for(int i=0;i<waterStartTime.size();i++){
            ans = min(ans,max(mini,waterStartTime[i])+waterDuration[i]);
        }
        
        return ans;

    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        return min(solve(landStartTime,landDuration,waterStartTime,waterDuration),solve(waterStartTime,waterDuration,landStartTime,landDuration));
    }
};