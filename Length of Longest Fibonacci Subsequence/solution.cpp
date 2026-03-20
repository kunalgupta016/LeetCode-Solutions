class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int> st;
        for(int i:arr) st.insert(i);
        int longest = 0;
        for(int i = 0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                int f = arr[i];
                int s = arr[j];
                int l = 2;
                bool ok = false;
                while(st.count(f+s)){
                    int t = f;
                    f = s;
                    s = t+f;
                    l++;
                    ok = true;

                }
                if(ok) longest = max(longest,l);

            }
        }
        return longest;
    }
};