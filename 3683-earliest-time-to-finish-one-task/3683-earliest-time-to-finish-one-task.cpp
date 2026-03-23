class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int sum = tasks[0][0]+tasks[0][1];
        for(auto i:tasks){
            sum = min(sum,i[0]+i[1]);
        }
        return sum;
    }
};