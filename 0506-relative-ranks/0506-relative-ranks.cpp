class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;

        sort(temp.rbegin(),temp.rend());
        unordered_map<int,string>mp;
        for(int i = 0;i<temp.size();i++){
            if(i==0){
                mp[temp[0]] = "Gold Medal";
            }
            else if(i==1){
                mp[temp[1]] = "Silver Medal";
            }
            else if(i==2){
                mp[temp[2]] = "Bronze Medal";
            }else{
                mp[temp[i]] = to_string(i+1);
            }
        }
        string a = "";
        vector<string> ans(score.size());

        for(int i =0;i<score.size();i++){
            ans[i] = mp[score[i]];
        }
        return ans;

    }
};