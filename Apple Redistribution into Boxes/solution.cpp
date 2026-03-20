class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total  = 0;
        for(int i :apple){
            total+=i;
        }

        sort(capacity.rbegin(),capacity.rend());
        int cnt = 0;
        int n = capacity.size();
        for(int i = 0;i<n;i++){
            
            cnt++;
            total-=capacity[i];
            if(total<=0) return cnt;

        }
        return cnt;

    }
};