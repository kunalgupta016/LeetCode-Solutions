class Solution {
public:

    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }


    
    string reverseWords(string s) {

        string st = s;
        int i= 0;
        int n = s.size();
        int cnt = 0;
        while(i<n && st[i]!=' '){
            if(isVowel(st[i])){
                cnt++;
            }
            i++;
        }
        i++;

        while(i<n){
            int start = i;
            int count = 0;
            while(i<n && st[i]!=' '){
                if(isVowel(st[i])) count++;
                i++;
            }
            int end = i;
            if(count==cnt){
                reverse(st.begin()+start , st.begin()+end);
            }
            i++;

        }
        return st;
    }
};