class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long res = 1;
        vector<int> ans;
        ans.push_back(res);
        for(int i=1;i<rowIndex+1;i++){
            res = res * (rowIndex+1-i);
            res = res/i;
            ans.push_back(res);
        }
        return ans;
    }
};