class Solution {
public:
    long long minMoves(vector<int>& balance) {
        long long sum= 0;
        int pos = -1;
        for(int i = 0;i<balance.size();i++){

            sum+=balance[i];
            if(balance[i]<0){
                pos = i;
            }
        }
        int n = balance.size();
        if(sum < 0) return -1;
        if(pos==-1){
            return 0;
        }

        long long need = -balance[pos];
        long long moves = 0;

        vector<pair<int,int>> d;
        for(int i = 0;i<n;i++){
            if(balance[i]>0 && i!=pos){
                int dist = abs(i-pos);
                dist = min(dist,n-dist);
                d.push_back({dist,i});
            }
        }

        sort(d.begin(),d.end());
        for(auto it:d){
            if(need==0) break;
            int idx = it.second;
            long long t = min((long long )balance[idx],need);
            moves+=t*it.first;
            need-=t;
        }

        return need==0?moves:-1;



        


        
    }
    
};