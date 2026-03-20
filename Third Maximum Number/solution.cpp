class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        int size = st.size();
        if(size<3){
            return *st.rbegin();
        }
        
        else{
            auto it = st.rbegin();
            advance(it, 2);       
            return *it;
            
        }

    }
};