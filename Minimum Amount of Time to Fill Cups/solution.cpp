class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        int cnt = 0;
        while(true){
            sort(amount.begin(),amount.end());
            
            if(amount[2]==0) break;    
            amount[2] = amount[2] - 1;
            if(amount[1]>0) amount[1] = amount[1] -1;
            cnt++;
        }
        return cnt;

        

    }
};