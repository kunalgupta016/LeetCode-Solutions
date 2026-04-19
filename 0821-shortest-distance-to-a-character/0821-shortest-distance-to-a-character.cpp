class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        map<char,vector<int>> mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        vector<int> arr = mp[c];
        vector<int> ans;
        for(int i =0;i<s.size();i++){
            int mini = INT_MAX;
            for(int j = 0;j<arr.size();j++){
                int ind = arr[j];
                mini = min(mini,abs(ind-i));
            }
            ans.push_back(mini);

        }
        return ans;
    }
};