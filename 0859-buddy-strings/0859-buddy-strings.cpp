class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        if(goal.size()!=n) return false;
        if(s==goal){
            set<char> temp(s.begin(),s.end());
            return temp.size()<goal.size();
        }
        int i = 0;
        int j = n-1;
        while(i<j && s[i]==goal[i]){
            i++;
        }
        while(i<j && s[j]==goal[j]){
            j--;
        }
        if(i<j) swap(s[i],s[j]);
        return s==goal;
    }
}; 