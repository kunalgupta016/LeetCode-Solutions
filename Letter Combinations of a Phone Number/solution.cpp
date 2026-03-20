class Solution {
public:

    void solve(int i , string mapping[] ,string digits,vector<string>&ans,string output){

        if(i>=digits.length()){
            ans.push_back(output);
            return;
        }

        int num = digits[i]-'0';
        string value = mapping[num];
        for(int j = 0;j<value.length();j++){
            output.push_back(value[j]);
            solve(i+1,mapping,digits,ans,output);
            output.pop_back();
        }

    }


    vector<string> letterCombinations(string digits) {
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string output = "";
        if(digits.length()==0) return ans;
        solve(0,mapping,digits,ans,output);
        return ans;

    }
};