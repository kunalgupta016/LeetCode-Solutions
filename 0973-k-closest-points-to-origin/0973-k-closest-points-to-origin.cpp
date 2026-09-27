class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<points.size();i++){

            int x = points[i][0];
            int y = points[i][1];

            long long dist = (long long)x * x + (long long)y * y;
            pq.push({dist,i});
            if(pq.size()>k){
                pq.pop();
            }

        }

        vector<vector<int>> ans;
        while(!pq.empty()){
            
            auto t = pq.top();
            pq.pop();
            int index = t.second;
            ans.push_back(points[index]);


        }
        return ans;

    }
};