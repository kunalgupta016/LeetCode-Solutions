class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hfences, vector<int>& vfences) {
        
        hfences.push_back(1);
        hfences.push_back(m);

        vfences.push_back(1);
        vfences.push_back(n);

        long long maxi = 0;
        unordered_set<int> st;
        for(int i =0;i<hfences.size();i++){
            for(int j = i+1;j<hfences.size();j++){
                st.insert(abs(hfences[j]-hfences[i]));
            }
        }

        for(int i = 0;i<vfences.size();i++){
            for(int j = i+1;j<vfences.size();j++){
                int val = abs(vfences[j]-vfences[i]);
                if(st.count(val)){
                    maxi = max(maxi,(long long)val);
                }
            }
        }

        if(maxi == 0) return -1;
        return (maxi*maxi)%1000000007;


    }
};