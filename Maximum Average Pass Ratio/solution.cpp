class Solution {
public:

    double delta(int pass,int total){
        return (double)(pass+1)/(total+1) - (double)(pass)/(total);
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        priority_queue<tuple<double,int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push( {(delta(classes[i][0],classes[i][1])) ,classes[i][0] ,classes[i][1] });

        }

        while(extraStudents--){
            auto [d,pass,total] = pq.top();
            pq.pop();
            pass+=1;
            total+=1;
            pq.push({delta(pass,total),pass,total});

        }
        double sum = 0;

        while(!pq.empty()){
            auto [d,pass,total] = pq.top();
            pq.pop();
            sum += (double)pass/total;
        }

    return sum / n ;


    }
};