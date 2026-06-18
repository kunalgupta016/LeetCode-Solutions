class Solution {
public:
    vector<vector<string>> ans;

    bool palindrome(string &s , int l, int r){

        while(l<r){

            if(s[l]!=s[r]) return false;
            l++;
            r--;
            
        }
        return true;

    }

    void backtrack(string s , int i , vector<string>& path){

        if(i==s.size()){
            ans.push_back(path);
            return;
        }

        for(int idx = i;idx<s.size();idx++){

            if(palindrome(s,i,idx)){

                path.push_back(s.substr(i,idx-i+1));
                backtrack(s,idx+1,path);
                path.pop_back();



            }

        }




    }


    vector<vector<string>> partition(string s) {
        vector<string> path;
        backtrack(s,0,path);
        return ans;

    }
};