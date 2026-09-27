class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());

        priority_queue<int,vector<int>,greater<int>> pq;
        int total = 0;
        int i = 0;
        int n = events.size();
        for(int d = 1;d<=100000;d++){

            while(!pq.empty() && pq.top()<d){
                pq.pop();
            }

            while(i<n && events[i][0]==d){
                pq.push(events[i][1]);
                i++;
            }

            if(!pq.empty()){

                pq.pop();
                total++;

            }


            if(i>=n && pq.empty()){

                break;

            }


        }
        return total;
    }
};