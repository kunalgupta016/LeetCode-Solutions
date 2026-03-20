class Solution {
public:

    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    }

    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;
        for(int i = 0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k) pq.pop();
        }
        vector<pair<int,int>> temp;
        while(!pq.empty()){
            temp.push_back(pq.top());
            pq.pop();
            
        }
        sort(temp.begin(),temp.end(),cmp);
        vector<int> ans;
        for(auto it:temp){
            ans.push_back(it.first);
        }
        return ans;
    }
};