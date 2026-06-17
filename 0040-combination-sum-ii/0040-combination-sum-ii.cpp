class Solution {
public:

    void solve(vector<vector<int>> &result,vector<int>&inner,vector<int>&candidates,int target,int indx ){

        
            if(target==0) {result.push_back(inner);
            return;}
        

        for(int i = indx;i<candidates.size();i++){

            if(i>indx && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            int ele = candidates[i];
            inner.push_back(ele);
            solve(result,inner, candidates, target-ele, i+1);
            inner.pop_back();

        }


    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> inner;
        solve(result,inner,candidates,target,0);
        return result;
    }
};