class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+1,0);
        for(int i = 0;i<bookings.size();i++){
            int f = bookings[i][0]-1;
            int l = bookings[i][1]-1;
            int s = bookings[i][2];
            diff[f]+=s;
            diff[l+1]-=s;
        }
        vector<int> ans(n);
        ans[0] = diff[0];
        for(int i = 1;i<n;i++){
            ans[i] = ans[i-1] + diff[i];
        }
        
        return ans;
    }
};