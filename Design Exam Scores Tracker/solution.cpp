class ExamTracker {
private:
    vector<pair<int,long long>> p;
    int sc ;
public:
    
    ExamTracker() {
        sc = 0;
    }
    
    void record(int time, int score) {
        sc = score;
        long long crrSum = sc;
        if(!p.empty()){
            crrSum+=p.back().second;
        }
        p.push_back({time,crrSum});
    }
    
    long long totalScore(int startTime, int endTime) {
        if(p.empty()) return 0;
        long long leftSum = 0;
        long long rightSum = 0;

        int low = 0;
        int high = p.size()-1;
        int mid = low+(high-low)/2;
        while(low<=high){
            if(p[mid].first<startTime){
                leftSum = p[mid].second;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }

        low = 0;
        high = p.size()-1;
        mid = low+(high-low)/2;
        while(low<=high){
            if(p[mid].first<=endTime){
                rightSum = p[mid].second;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }
        
        return rightSum - leftSum;
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */