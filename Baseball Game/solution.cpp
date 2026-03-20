class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto ch:operations){
            if(ch=="+"){
                int f = st.top();
                st.pop();
                int s = st.top();
                st.pop();
                st.push(s);
                st.push(f);
                st.push(f+s);
            }
            else if(ch=="C"){
                st.pop();
            }
            else if(ch=="D"){
                int f = st.top();
                st.push(2*f);
            }else{
                int num = stoi(ch);
                st.push(num);
            }
        }
        int sum = 0;
        while(!st.empty()){
            int num = st.top();
            st.pop();
            sum+=num;
        }
        return sum;
    }
};