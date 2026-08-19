class Solution {
public:

    bool isAvailable(unordered_set<int> st,int val){
        return st.find(val)==st.end();
    }

    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,unordered_set<int>> mp;
        for(auto i:reservedSeats){
            int f = i[0];
            int s = i[1];
            mp[f].insert(s);
        }

        int size = mp.size();
        int result = (n-size)*2;

        for(auto it:mp){

            int f = it.first;
            unordered_set<int> st= it.second;

            bool groupA = isAvailable(st,2) && isAvailable(st,3) && isAvailable(st,4) && isAvailable(st,5);
            
            bool groupB = isAvailable(st,4) && isAvailable(st,5) && isAvailable(st,6) && isAvailable(st,7);

            bool groupC = isAvailable(st,6) && isAvailable(st,7) && isAvailable(st,8) && isAvailable(st,9);

            if(groupA && groupC){
                result+=2;
            }else if(groupA || groupB || groupC){
                result+=1;
            }else{
                result+=0;
            }

        }
        return result;

    }
};