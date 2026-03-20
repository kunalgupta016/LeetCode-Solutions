class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if (words.empty() || s.empty()) {
            return ans;
        }
        int wordLen = words[0].size();
        int totalWords = words.size();
        int totalLen = wordLen * totalWords;
        unordered_map<string,int> wordCount;
        for(auto &i:words){
            wordCount[i]++;
        }
        for(int i= 0;i<wordLen;i++){
            int l = i;
            int r = i;
            unordered_map<string,int> seen;
            int cnt = 0;
            while(r+wordLen<=s.size()){
                string word = s.substr(r,wordLen);
                r+=wordLen;
                if(wordCount.count(word)){
                    seen[word]++;
                    cnt++;
                    while(seen[word]>wordCount[word]){
                        string leftWord = s.substr(l, wordLen);
                        seen[leftWord]--;
                        l += wordLen;
                        cnt--;

                    }
                    if(cnt==totalWords){
                        ans.push_back(l);
                    }
                }else{
                    seen.clear();
                    cnt = 0;
                    l = r;
                }

            }

        }
        return ans;
    }
};