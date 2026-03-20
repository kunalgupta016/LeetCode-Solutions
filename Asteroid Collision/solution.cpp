

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            bool alive = true;

            
            while (!st.empty() && a < 0 && st.top() > 0) {
                if (abs(st.top()) < abs(a)) {
                    
                    st.pop();
                    continue;
                } else if (abs(st.top()) == abs(a)) {
                    
                    st.pop();
                }
                 
                alive = false;
                break;
            }

            if (alive) st.push(a);
        }

        
        vector<int> result(st.size());
        for (int i = (int)st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};