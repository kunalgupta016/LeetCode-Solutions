class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        stack<int> st;
        int prev = 0;
        for(string it:logs){
            int id,time;
            string type;
            int p1 = it.find(':');
            int p2 = it.find(':',p1+1);

            id =  stoi(it.substr(0,p1));
            type = it.substr(p1+1,p2-p1-1);
            time = stoi(it.substr(p2+1));

            if(type=="start"){
                if(!st.empty()){
                    ans[st.top()]+=time-prev;
                    
                }
                st.push(id);
                    prev = time;
            }
            else{
                ans[st.top()]+=time-prev+1;
                st.pop();
                prev = time+1;
            }


        }
        return ans;
    }
};