class Solution {
public:

    int request(int a , int b){

        return !(b <= 0.5 * a + 7 || b > a || (b > 100 && a < 100));

    }


    int numFriendRequests(vector<int>& ages) {
        unordered_map<int,int> mp;
        for(int i:ages){
            mp[i]++;
        }
        int ans = 0;
        for(auto a:mp){
            for(auto b:mp){
                if(request(a.first,b.first)){
                    ans+=a.second*(b.second-(a.first==b.first?1:0));
                }
            }
        }
        return ans;
    }
};