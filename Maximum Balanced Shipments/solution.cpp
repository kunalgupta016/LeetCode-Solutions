class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int cnt = 0;
        int n = weight.size();
        int jy = 0;
        int crr = 0;
        for(int i = 0;i<n;i++){
            crr = weight[i];
            jy = max(jy,crr);
            if(crr<jy){
                cnt++;
                jy = 0;
                crr = 0;
            }
        }
        return cnt;
    }
};