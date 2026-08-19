class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum = abs(0-requests[0]);
        n = requests.size();
        for(int i = 1;i<n;i++){
            sum+=abs(requests[i]-requests[i-1]);
        }
        return sum;
        
    }
};