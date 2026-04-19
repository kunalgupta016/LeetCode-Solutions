class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        set<string> st;

        for(string email : emails){

            string local = "";
            string domain = "";

            int i=0;

            while(email[i] != '@'){

                if(email[i] == '+'){
                    while(email[i] != '@'){
                        i++;
                    }
                    break;
                }

                if(email[i] != '.'){
                    local += email[i];
                }

                i++;
            }

            i++; 
            while(i < email.size()){
                domain += email[i];
                i++;
            }

            st.insert(local + "@" + domain);
        }

        return st.size();
    }
};