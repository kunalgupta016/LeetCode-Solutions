class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int e = numbers.size()-1;
        int sum = 0;
        vector<int> ans;
        while(i<e){
            sum = numbers[i]+numbers[e];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(e+1);
                break;
            }
            else if(sum>target){
                e--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};