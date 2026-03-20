class Solution {
public:

    bool containsZero(int num) {
        
        while (num > 0) {
            if (num % 10 == 0) {
                return true; 
            }
            num /= 10; 
        }
        return false; 
}

    vector<int> getNoZeroIntegers(int n) {
     vector<int> ans;
        for(int a = 1;a<n;a++){
            int b = n-a;
            if(!containsZero(a) && !containsZero(b)){
                ans.push_back(a);
                ans.push_back(b);
                return ans;
            }
        }
        return {};
    }
};