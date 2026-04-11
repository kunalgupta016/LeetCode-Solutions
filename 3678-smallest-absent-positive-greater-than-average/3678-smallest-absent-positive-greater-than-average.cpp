class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        
        int sum = 0;
        for(int x : nums) sum += x;
        
        double avg = (double)sum / nums.size();
        
        int i = floor(avg) + 1;
        if(i<=0){
            i =1;
        }
        while(true){
            if(!st.count(i)) return i;
            i++;
        }
        
    }
};