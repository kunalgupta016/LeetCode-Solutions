class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int cnt = 0;
        int n = rocks.size();
        vector<int> diff;
        for (int i = 0; i < n; i++) {
            diff.push_back(capacity[i] - rocks[i]);
        }
        sort(diff.begin(),diff.end());

        for(int &d:diff){
            if(d==0) cnt++;
            else if(d<=additionalRocks){
                additionalRocks = additionalRocks-d;
                cnt++;
            }else{
                break;
            }
        }
        

        return cnt;
    }
};