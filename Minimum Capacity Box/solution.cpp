class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        
        int n = capacity.size();
        int maxIndx = n;
        int mini = 200;
        for(int i = 0;i<n;i++){
            int val = capacity[i];
            if(val>=itemSize){
                if(val<mini){
                    mini = val;
                    maxIndx = i;
                }
            }
        }
        if(maxIndx==n) return -1;
        return maxIndx;

    }
};