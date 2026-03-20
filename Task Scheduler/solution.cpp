class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int > pq;
        vector<int>mp(26,0);

        for(char i:tasks){
            mp[i-'A']++;  
        }   
        for(int i=0;i<26;++i){
            if(mp[i]) 
            pq.push(mp[i]);
        }
        int time =0;
        while(!pq.empty()){
            
            int cycle = n+1;
            vector<int> remain;
            while(cycle && !pq.empty()){
                int max_freq = pq.top();
                pq.pop();
                if(max_freq>1) {
                    remain.push_back(max_freq-1);
                }
                time++;
                cycle--;
            }
            for(int cnt : remain){
                pq.push(cnt);
            }
            if(pq.empty()) break;
            time+=cycle;
        }
        return time;

    }
};