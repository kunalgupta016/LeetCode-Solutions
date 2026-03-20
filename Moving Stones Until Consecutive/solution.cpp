class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> arr(3);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort(arr.begin(),arr.end());
        int min = 3;
        if(arr[0]+1 == arr[1] && arr[1]+1 ==arr[2]){
            min = 0;
        }
        else if(arr[0]+1 == arr[1] || arr[1] + 1 == arr[2]){
            min = 1;
        }else{
            min = 1;
            int currmin = 1;
            if(arr[0]+1 == arr[1]-1){
                currmin = 0;
            }
            if(arr[2]-1 == arr[1]+1){
                currmin = 0;
            }
            min += currmin;
        }
        int max = arr[2]-arr[0]-2;
        vector<int> ans(2);
        ans[0] = min;
        ans[1] = max;
        return ans;
    }
};