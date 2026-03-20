class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int el =  0;
        int cnt = 0 ;
        
        for(int i =0 ;i<n ;i++){
            if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        }
        
        int cnt1 = 0;
        for(int i =0;i<n;i++){
            if(el==arr[i]){
                cnt1++;
            }
        }
  return el;
    }
};