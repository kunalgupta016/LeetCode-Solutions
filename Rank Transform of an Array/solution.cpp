class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
        for(int i =0;i<arr.size();i++){
            pq.push({arr[i],i});
        }
        int n = arr.size();
        vector<int> ans(n);
        int cnt = 1;
        int prev= INT_MIN;
        while(!pq.empty()){
            auto it= pq.top();
            pq.pop();
            int idx = it.second;
            int val = it.first;
             if(val != prev){
                ans[idx] = cnt;
                cnt++;
            } else {
                ans[idx] = cnt - 1;
            }

            prev = val;
        }
        return ans;



    }
};