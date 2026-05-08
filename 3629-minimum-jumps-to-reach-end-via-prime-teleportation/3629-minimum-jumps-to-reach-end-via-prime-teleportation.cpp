class Solution {
public:

    vector<int> isPrime;
    void build(int maxEle){
        isPrime.resize(maxEle+1,true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2;i*i<=maxEle;i++){
            if(isPrime[i]){
                for(int j = i*i;j<=maxEle;j+=i){
                    isPrime[j] = false;
                }
            }   
        }
    }


    int minJumps(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> mp;
        int maxEle = 0;
        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
            
            maxEle = max(maxEle,nums[i]);
        }

        build(maxEle);
        queue<int> q;
        q.push(0);
        vector<int> visited(n,false);
        visited[0] = true;
        int steps = 0;

        unordered_set<int> seen;
        seen.insert(0);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int i = q.front();
                q.pop();

                if(i==n-1) return steps;
                if(i-1>=0 && !visited[i-1]){
                    q.push(i-1);
                    visited[i-1] = true;
                }
                if(i+1<=n-1 && !visited[i+1]){
                    q.push(i+1);
                    visited[i+1] = true;
                }
                if(!isPrime[nums[i]] || seen.count(nums[i])) continue;


                for(int mul = nums[i];mul<=maxEle;mul+=nums[i]){
                    if(!mp.count(mul)) continue;
                    for(auto idx:mp[mul]){
                        if(!visited[idx]){
                            q.push(idx);
                            visited[idx] = true;
                        }
                    }
                }
                seen.insert(nums[i]);
            }
            steps++;
        }
        return steps;

    }
}; 