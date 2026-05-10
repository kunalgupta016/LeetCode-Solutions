class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int sum = 0;
        int cnt = 0;
        for(auto st:events){
            if(cnt==10){
                break;
            }
            if(st=="WD" || st=="NB" || st=="1"){
                sum++;
            }
            else if(st=="W"){
                cnt++;
            }
            else if(st=="2"){
                sum+=2;
            }
            else if(st=="3"){
                sum+=3;
            }
            else if(st=="4"){
                sum+=4;
            }
            else if(st=="6"){
                sum+=6;
            }
        }
        return {sum,cnt};
    }
};