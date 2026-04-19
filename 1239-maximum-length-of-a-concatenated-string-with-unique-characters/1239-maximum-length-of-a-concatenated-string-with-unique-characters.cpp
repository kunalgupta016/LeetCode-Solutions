class Solution {
public:

    bool hasDuplicate(string s1,string s2){
        
        vector<int> v(26);
        for(char ch:s1){
            if(v[ch-'a']>0) return true;
            v[ch-'a']++;
        }
        for(char ch:s2){
            if(v[ch-'a']>0) return true;
        
        }

        return false;
    }

    unordered_map<string,int> mp;



    int solve(int i , vector<string>&arr,string temp, int n){
        if(i>=n){
            return temp.length();
        }   

        int exclude = 0;
        int include = 0;

        if(mp.find(temp)!=mp.end()) return mp[temp];

        if(hasDuplicate(arr[i],temp)){
            exclude = solve(i+1,arr,temp,n);
        }
        else{
            exclude = solve(i+1,arr,temp,n);
            include = solve(i+1,arr,temp+arr[i],n);
        }

        return mp[temp]=max(include,exclude);

    }

    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string temp = "";
        return solve(0,arr,temp,n);

    }
};