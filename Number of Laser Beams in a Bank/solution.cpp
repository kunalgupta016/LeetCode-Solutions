class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        int phle = 0;
        for(int i =0;i<bank.size();i++){
            int cnt = 0;
            for(int j = 0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    cnt++;
                }
            }
            sum+=cnt*phle;
            if(cnt!=0){
                phle = cnt;
            }

        }
        return sum;
    }
};