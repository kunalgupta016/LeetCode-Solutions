class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int maxArea = 0;
        while(s<e){
            
            int w = e-s;
            int h = min(arr[s],arr[e]);
            int area = w*h;
            if(area>maxArea){
                maxArea = area;
            }
            
            
            if(arr[s]<arr[e]){
                s++;
            }
            else{
                e--;
            }
        }
        
        return maxArea;

    }
};