class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        for(auto it:logs){
            if(it=="../"){
                if(res>0) res--;
            }
            else if(it!="./"){
                res++;
            }
        }
        return res;
    }
};