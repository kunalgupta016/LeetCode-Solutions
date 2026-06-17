class Solution {
public:

    void solve(vector<vector<int>> &result,vector<int>&inner,vector<int>&candidates,int target,int indx ){

        if(indx==candidates.size()){
            if(target==0) result.push_back(inner);
            return;
        }

        // exclude
        solve(result,inner,candidates,target,indx+1);
        // include
        int elem = candidates[indx];
        if(elem<=target){
        inner.push_back(elem);
        solve(result,inner,candidates,target-elem,indx);
        inner.pop_back();

        }


    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> inner;
        solve(result,inner,candidates,target,0);
        return result;
    }
};