class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxSum = 0;
        for(int i:cardPoints){
            maxSum+=i;
        }

        int windowSize = n-k;
        int crrSum = 0;
        
        for(int i =0;i<windowSize ;i++)crrSum+=cardPoints[i];
        int mini = crrSum;
        for(int i = windowSize;i<n;i++ ){
            crrSum+=cardPoints[i]-cardPoints[i-windowSize];
            mini = min(crrSum,mini);
        }
        return maxSum - mini;

    }
};