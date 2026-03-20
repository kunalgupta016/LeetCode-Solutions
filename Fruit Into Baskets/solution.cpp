class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int s = 0;
        int e = 0;
        int maxi =0;
        unordered_map<int,int> mp;
        int n = fruits.size();
        for(e = 0;e<n;e++){
            mp[fruits[e]]++;
            while(mp.size()>2){
                mp[fruits[s]]--;
                if(mp[fruits[s]]==0){
                    mp.erase(fruits[s]);
                }
                s++;
            }

            maxi =max(maxi,e-s+1); 
        }
        return maxi;
        


    }
};