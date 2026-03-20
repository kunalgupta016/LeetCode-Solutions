class Solution {
public:
int largestSumAfterKNegations(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        priority_queue<int, vector<int> , greater<int> > pq ;

        for(int i = 0;i<n;i++){
            pq.push(arr[i]);
        }

        while(k--){
            int t = pq.top();
            
            pq.pop();
            
            pq.push(-t);

        }

        int sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;

    }
};