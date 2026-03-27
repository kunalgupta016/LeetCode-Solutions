class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int n = name.size();
        int m = typed.size();
        for(int j = 0;j<m;j++){
            if(i<n && name[i]==typed[j]) i++;
            else if(j==0 || typed[j]!=typed[j-1]) return false;
        
        }
        return i==n;
    }
};