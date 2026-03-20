class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& v, int firstPerson) {
        


        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[2] < b[2]; 
});
    

    vector<int> vis(n,0);
    vis[0] = 1;
    vis[firstPerson] = 1;
    int i = 0;
    while(i<v.size()){
        int time = v[i][2];
        vector<pair<int,int>> temp;

        while(i<v.size() && v[i][2]==time){
            temp.push_back({v[i][0],v[i][1]});
            i++;
        }

        unordered_set<int> sp;
        for(auto &it:temp){
            if(vis[it.first]){
                sp.insert(it.first);
            }

            if(vis[it.second]){
                sp.insert(it.second);
            }
        }

        bool change = true;
        while(change){
            change = false;
            for(auto &it:temp){
                if(sp.count(it.first) && !sp.count(it.second)){
                    sp.insert(it.second);
                    change = true;
                }
                if(!sp.count(it.first) && sp.count(it.second)){
                    sp.insert(it.first);
                    change = true;
                }
            }
        }

        for(auto it:sp) vis[it] = 1;

    }


    vector<int> ans;
    for (int i = 0; i < n; i++) {
            if (vis[i]) ans.push_back(i);
        }
    return ans;
    }
};