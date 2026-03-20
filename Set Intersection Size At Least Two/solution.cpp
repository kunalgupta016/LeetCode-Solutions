class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            if(a[1]==b[1]) return a[0]>b[0];
            return a[1]<b[1];
        });
        vector<int> nums;
        
        int start = intervals[0][0];
        int end = intervals[0][1];

        int lI = end;
        int sI = end-1;
        if(sI<start) sI = start;

        nums.push_back(sI);
        nums.push_back(lI);

        int n = intervals.size();

        for(int i = 1;i<n;i++){

            int firstIndex = intervals[i][0];
            int lastIndex = intervals[i][1];
            
            bool sInside = (sI>=firstIndex && sI<=lastIndex);
            bool lInside = (lI>=firstIndex && lI<=lastIndex);


            if(lInside && sInside){

            }

            else if(lInside){
                sI = lI;
                lI =  lastIndex;
                nums.push_back(lI);


            }
            else{
                sI = lastIndex-1;
                if(sI < firstIndex) sI = firstIndex;
                lI = lastIndex;
                nums.push_back(sI);
                nums.push_back(lI);

            }


            
            



        }
        return nums.size();

    }
};