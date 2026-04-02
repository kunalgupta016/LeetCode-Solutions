class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n = possible.size();
        for(int i=0;i<n;i++){
            if(possible[i]==0){
                possible[i] = -1;
            }
        }
        vector<int> prefix(n);
        prefix[0] = possible[0];
        for(int i =1;i<n;i++){
            prefix[i] = prefix[i-1]+possible[i];
        }
        int total = prefix[n-1];
        for(int i = 0;i<n-1;i++){
            int crr = prefix[i];
            int right = total-crr;
            if(crr>right){
                return i+1;
            }
        }
        return -1;
    }
};