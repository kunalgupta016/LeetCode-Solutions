class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        st.erase(beginWord);
        int cnt = 0;
        while(!q.empty()){
            cnt = q.front().second;
            string word = q.front().first;
            q.pop();
            if(word==endWord) return cnt;
            for(int i = 0;i<word.size();i++){
                char ori = word[i];
                for(char j = 'a' ;j<='z';j++){
                    word[i] = j;
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        q.push({word,cnt+1});

                    }
                }
                word[i] = ori;
            }
        }
        return 0;
    }
};