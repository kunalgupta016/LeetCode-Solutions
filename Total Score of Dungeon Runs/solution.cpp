class Solution {
public:
    long long totalScore(int hp, vector<int>& damage, vector<int>& requirement) {
        long long  ans = 0;
        long long  point = hp;
        vector<long long> p{0};
        long long s = 0;
        for(int i:damage){
            p.push_back(s+=i);
        }
        for(int i =0;i<damage.size();i++){
            long long t = p[i+1] + requirement[i] - point;
            int index = lower_bound(p.begin(),p.end(),t)-p.begin();
            if(index<=i){
                ans+=i-index+1;
            }

        }
        return ans;
    }
};