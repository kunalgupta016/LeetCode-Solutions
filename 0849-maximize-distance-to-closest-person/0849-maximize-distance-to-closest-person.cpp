class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(seats[i]==0){
                int ans1=0,ans2=0;
                for(int j = i-1;j>=0;j--)
                {
                    if(seats[j]==1){
                        ans1 = (i-j);
                        break;
                    }
                }
                for(int j = i+1;j<n;j++)
                {
                    if(seats[j]==1){
                        ans2 =(j-i);
                        break;
                    }
                }
                
                ans = max(ans,min(ans1,ans2));
                if(ans1==0 || ans2==0)
                {
                    ans = max(ans,max(ans1,ans2));
                }

            }
        }
        return ans;
    }
};