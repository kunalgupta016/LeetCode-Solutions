class Solution {
public:


    vector<int> nextSmaller(vector<int> heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> arr(n);
        for(int i = n-1;i>=0;i--){


            while( st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr;
    }

    vector<int> preSmaller(vector<int> heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> arr(n);
        for(int i = 0;i<n;i++){


            while( st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr;
    }



    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmaller(heights,n);
        vector<int> pre(n);
        pre = preSmaller(heights,n);

        for(int i = 0;i<n;i++){
            cout<<next[i]<<" ";
            
            
        }cout<<endl;
        for(int i = 0;i<n;i++){
            cout<<pre[i]<<" ";
            
        }cout<<endl;

        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            int l = heights[i];
            
            if(next[i]==-1){
                next[i] = n;
            }
            int b = next[i]-pre[i]-1;

            
            int area = l*b;
            maxi = max(maxi,area);
        }
        return maxi;



    }
};
