class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        for(int i = 1;i<=9;i++){
            q.push(i);
        }
        vector<int> ans;
        int i = 0;
        while(i<q.size()){
            int num = q.front();
            q.pop();
            if(num>=low && num<=high){
                ans.push_back(num);
            }
            int last = num%10;
            if(last!=9){
                int next = num*10 + (last+1);
                if(next<=high){
                    q.push(next);
                }
            }
        }
        return ans;
    }
};