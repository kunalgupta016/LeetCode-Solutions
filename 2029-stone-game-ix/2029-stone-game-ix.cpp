class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int arr[] = {0,0,0};
        for(int i:stones){
            arr[i%3]+=1;
        }
        if(arr[0]%2==0){
            return bool(arr[1]&&arr[2]);
        }
        return abs(arr[1]-arr[2])>2;


    }
}; 