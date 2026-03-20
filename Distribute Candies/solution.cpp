class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(auto it:candyType){
            st.insert(it);
        }
        int n = candyType.size()/2;
        int size = st.size();
        return min(n,size); 
    }
};