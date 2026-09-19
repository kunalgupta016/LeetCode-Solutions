class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int pSize = p.size();
        int sSize = s.size();
        vector<int> ans; // index push

        if(pSize>sSize) return ans;

        vector<int> freqP(26,0),freqS(26,0);
        for(int i = 0;i<pSize;i++){
            char ele = p[i];
            freqP[ele-'a']++;
        }

        for(int i = 0;i<pSize;i++){
            char ele = s[i];
            freqS[ele-'a']++;
        }

        if(freqP==freqS){
            ans.push_back(0);
        }


        int l = 0;
        int r = pSize;
        while(r<sSize){

            char newEle = s[r];
            char oldEle = s[l];

            l++;

            freqS[newEle-'a']++;
            freqS[oldEle-'a']--;

            
            if(freqS==freqP){
                ans.push_back(l);
            }
            r++;
            


        }
        return ans;


    }
};