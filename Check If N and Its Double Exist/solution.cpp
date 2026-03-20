class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i :arr){
            mp[i]++;
        }
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0){
                if(mp[arr[i]]>1) return true;
            }else{
                if(arr[i]==0) continue;
                if(mp.count(2*arr[i])) return true;
            }
            
        }
        return false;
    }
};