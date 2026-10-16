class Solution {
public:


    vector<int> nse(vector<int>&heights){
        int n = heights.size();
        vector<int> arr(n);
        stack<int> st;
        for(int i = n-1;i>=0;i--){

            while(!st.empty() && heights[st.top()]>=heights[i]){

                st.pop();

            }
            if(st.empty()){

            arr[i] = -1;
            }else{
                arr[i] = st.top();
            }
            st.push(i);

        }
        return arr;

    }


    vector<int> pse(vector<int>&heights){
        int n = heights.size();
        vector<int> arr(n);
        stack<int> st;
        for(int i =0;i<n;i++){

            while(!st.empty() && heights[st.top()]>=heights[i]){

                st.pop();

            }
            if(st.empty()){

            arr[i] = -1;
            }else{
                arr[i] = st.top();
            }
            st.push(i);

        }
        return arr;

    }


    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nse(heights);

        vector<int> prev(n);
        prev = pse(heights);

        int area = 0;

        for(int i = 0;i<heights.size();i++){

            int ele = heights[i];

            if(next[i]==-1){
                next[i] = n;
            }

            int b = next[i]-prev[i]-1;
            int a = b*ele;

            area = max(area,a);

        }

        return area;


    }
};