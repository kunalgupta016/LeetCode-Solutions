class Solution {
public:

    vector<int> generateRows(int n){
        vector<int> ans;
        long long res = 1;
        ans.push_back(1);
        for(int i=1;i<n;i++){

            res = res*(n-i);
            res = res/i;
            ans.push_back(res);


        }
        return ans;
    }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 1;i<=numRows;i++){
            result.push_back(generateRows(i));
        }
        return result;
    }
};