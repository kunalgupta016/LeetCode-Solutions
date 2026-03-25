class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nc = 0;
        int pc = 0;
        for(int i:nums){
            if(i==0) return 0;
            else if(i>0) pc++;
            else nc++;
        }
        if(nc&1) return -1;
        else return 1;
    }
};