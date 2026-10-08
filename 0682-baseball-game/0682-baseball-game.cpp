class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0;i<operations.size();i++){

            string ch = operations[i];

            if(ch=="+"){

                int f = st.top();
                st.pop();
                int s = st.top();
                st.push(f);
                st.push(f+s);
            }
            else if(ch=="D"){

                int t = st.top();
                st.push(t*2);

            }
            else if(ch=="C"){
                st.pop();
            }
            else{
                int num = stoi(ch);
                st.push(num);
            }

        }

        int ans = 0;
        while(st.empty()==false){
            int ele = st.top();
            ans = ans+ele;
            st.pop();
        }
        return ans;
    }
};