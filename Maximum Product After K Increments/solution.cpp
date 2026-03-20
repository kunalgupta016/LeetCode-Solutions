class Solution {
public:
    const int MOD = 1e9+7;
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int i :nums){
            pq.push(i);
        }
        long long ans = 1;
        int cnt = 0;
        while(cnt<k){
            long long ele = pq.top();
            pq.pop();
            ele++;
            pq.push(ele);
            cnt++;
        }
        while(!pq.empty()){
            long long ele = pq.top();
            pq.pop();
            ans = ((ans%MOD)*(ele%MOD))%MOD;
        }
        return (int)ans%MOD;
    }
};