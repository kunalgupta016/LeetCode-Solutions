class Solution {
public:

    // int isDivide(int n){
    //     if(n==1) return 0;
    //     int cnt = 0;
    //     while(n>0){
    //         if(n%3==0){
    //             cnt += n/3;
    //             return cnt;
    //         }
    //         else if(n%3==1){
    //             cnt += (n-4)/3+2;
    //             return cnt;
    //         }
    //         else if(n%3==2){
    //             cnt+=n/3+1;
    //             return cnt;
    //         }
            

            
    //     }
    //     return cnt;
    // }

    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i:tasks){
            mp[i]++;
        }
        int cnt = 0;
        for(auto &i:mp){
            int f = i.second;
           if(f==1) return -1;
           cnt+=(f+2)/3;

        }
        return cnt;

        
    }
};