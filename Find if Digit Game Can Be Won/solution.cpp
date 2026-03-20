class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int doubl = 0;
        for(int i :nums){
            if(i<10){
                single+=i;
            }
            else{
                doubl+=i;
            }
        }
        if(single>doubl){
            return true;
        }
        else if(single<doubl){
            return true;
        }
        else{
            return false;
        }
        
    }
};