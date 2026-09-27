class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i:stones){
            pq.push(i);
        }

        while(pq.size()>1){
            int first = pq.top();pq.pop();
            int second = pq.top();pq.pop();

            if(first==second) continue;
            else{
                int newW = first-second;
                pq.push(newW);
            }

        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};