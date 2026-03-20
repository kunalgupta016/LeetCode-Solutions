class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = potions.size();
        sort(potions.begin(),potions.end());
        for(int i :spells){
            long long minPotion = (success + i - 1) / i;
            int s = 0;
            int e = n-1;
            int idx = n;
            while(s<=e){    
                int mid = s+(e-s)/2;
                if(potions[mid]>=minPotion){
                    idx = mid;
                    e = mid-1;


                }
                else{
                    s = mid+1;
                }


            }
            ans.push_back(n-idx);
        }
        return ans;
    }
};