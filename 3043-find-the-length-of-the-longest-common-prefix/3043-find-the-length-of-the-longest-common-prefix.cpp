class Solution {
public:

    // int findLength(int n,int m){
    //     string s1 = to_string(n);
    //     string s2 = to_string(m);

    //     int i = 0;
    //     int j = 0;
    //     int cnt = 0;
    //     while(i<s1.size() && j<s2.size()){

    //         if(s1[i]!=s2[j]){
    //             return cnt;
    //         }
    //         cnt++;
    //         i++;
    //         j++;
            
    //     }
    //     return cnt;

    // }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        int n = arr1.size();
        int m = arr2.size();
        int maxi = -1;
        set<int> st;
        for(int i = 0;i<n;i++){
            int ele = arr1[i];
            while(ele!=0){
                st.insert(ele);
                ele  = ele/10;
            }
        }

        // for(int i:st){
        //     cout<<i<<endl;
        // }

        for(int i = 0;i<m;i++){

            int ele = arr2[i];
            while(ele && !st.contains(ele)){
                ele = ele/10;
            }

            int si = 0;
            while(ele!=0){
                si++;
                ele = ele/10;
            }
            maxi = max(maxi,si);


        }

        return maxi;


    }
};