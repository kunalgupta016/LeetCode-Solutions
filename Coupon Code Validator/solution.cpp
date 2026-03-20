class Solution {
public:

    bool isValid(string &s){
        if(s.empty()){
            return false;

        }
        for(char c:s){
            if(!(isalnum(c)||c=='_')){
                return false;
            }
        }
        return true;
    }


    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();
        unordered_map<string,int> rank = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}

        };

        vector<pair<pair<int,string>, string>> store; 

        for(int i = 0;i<n;i++){
            if(isValid(code[i]) && rank.count(businessLine[i]) && isActive[i]){
                store.push_back({{rank[businessLine[i]],code[i]},code[i]});
            }
        }

        sort(store.begin(),store.end());

        vector<string> ans;
        for(auto &it:store){
            ans.push_back(it.second);
        }


        return ans;


    }
};