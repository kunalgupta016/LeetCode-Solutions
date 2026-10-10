class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int cnt = 0;
        for(int i = 0;i<tickets.size();i++){
            q.push(i);
        }
        while(!q.empty()){

            int ele = q.front();
            q.pop();
            tickets[ele]--;
            if(tickets[ele]>=1){
                q.push(ele);
            }
            cnt++;
            if(ele==k && tickets[ele]==0){
                break;
            }

        }
        return cnt;
    }
};