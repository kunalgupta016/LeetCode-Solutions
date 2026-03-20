class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n+1,true);
        isPrime[0] = isPrime[1] = false;
        for(int i =1;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        vector<vector<int>> res;
        int s = 1;
        int e = n;
        if(n==1) return {};
        while(s<=e){
            while(!isPrime[s]) s++;
            while(!isPrime[e]) e--;

            if(!(s<=e)) return res;
            if(s+e==n){
                res.push_back({s++,e--});
            }else if(s+e>n){
                e--;
            }else{
                s++;
            }
        }
        return res;
    }
};