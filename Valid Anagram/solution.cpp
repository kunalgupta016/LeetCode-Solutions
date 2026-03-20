class Solution {
public:
    bool isAnagram(string s, string t) {
         int n = s.length();
         int m = t.length();
         if(n != m) return false;
         unordered_map<char , int> mp1;
         unordered_map<char , int> mp2;
         for(int i =0 ; i<n ; i++){
            mp1[s[i]]++;
         }
         for(int j =0 ; j<m ; j++){
            mp2[t[j]]++;
         }
         for(auto it : mp1){
            char ch = it.first;
            int val = it.second;
            int val2 = mp2[ch];
            if(val!=val2) return false;
         }
         
         return true;

    }
};