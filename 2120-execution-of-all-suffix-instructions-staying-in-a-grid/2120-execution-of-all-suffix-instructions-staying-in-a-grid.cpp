class Solution {
public:

    bool valid(int row,int col,int n){
        if(row<0 || row>=n || col<0 || col>=n) return false;
        return true;
    }

    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans;
    
        int crrX = startPos[0];
        int crrY = startPos[1];
        int x = crrX;
        int y = crrY;

        for(int i = 0;i<s.size();i++){
            crrX = x;
            crrY = y;
            int crrans = 0;
            for(int j = i;j<s.size();j++){
                
                if(s[j]=='R') crrY++;
                else if(s[j]=='L') crrY--;
                else if(s[j]=='U') crrX--;
                else crrX++;

                if(valid(crrX,crrY,n)){
                    crrans++;
                }else{
                    break;
                }
            }
            ans.push_back(crrans);
        }
        return ans;
    }
};