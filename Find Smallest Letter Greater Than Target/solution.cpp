class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        
        int l = 0;
        int r = n-1;
        char ans = letters[0];
        while(l<=r){
            int mid = l+(r-l)/2;
            char ch = letters[mid];
            
             if(ch>target){
                ans = ch;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
        
    }
};