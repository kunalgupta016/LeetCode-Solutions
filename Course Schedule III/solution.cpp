class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        int n = courses.size();
        sort(courses.begin(), courses.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        priority_queue<int> pq;
        int ld = 0;
        
        for(int i=0;i<n;i++){
            int d = courses[i][0];
            int ded = courses[i][1];
            pq.push(d);
            ld+=d;
            
            if(ld>ded){
                ld-=pq.top();
                pq.pop();
            }

        }

        return pq.size();
    }
};