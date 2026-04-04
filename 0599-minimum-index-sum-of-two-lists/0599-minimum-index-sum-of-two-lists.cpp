class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp1;
        
        
        for(int i = 0; i < list1.size(); i++){
            mp1[list1[i]] = i;
        }

        int mini = INT_MAX;
        vector<string> result;

        for(int i = 0; i < list2.size(); i++){
            if(mp1.count(list2[i])){
                

                if((i + mp1[list2[i]]) < mini){
                    mini = i + mp1[list2[i]];
                    result.clear();  
                    result.push_back(list2[i]);
                }
                else if((i + mp1[list2[i]]) == mini){
                    result.push_back(list2[i]);
                }
            }
        }

        return result;
    }
};