class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        sort(deck.begin(),deck.end());
        int n = deck.size();
        for(int i = 0;i<n;i++){
            q.push(i);
        }
        vector<int> ans(n);
        for(int i =0;i<n;i++){
            int index  = q.front();
            q.pop();
            ans[index] = deck[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }   
        return ans;
    }
};
