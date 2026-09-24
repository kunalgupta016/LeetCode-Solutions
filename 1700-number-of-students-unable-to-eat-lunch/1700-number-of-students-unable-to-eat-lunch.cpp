class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one = 0;
        int zero = 0;
        for(int i :students){
            if(i==0) zero++;
            else one++;
        }
        for(int i :sandwiches){
            if(i==0){
                if(zero==0) return one;
                zero--;
            }else{
                if(one==0) return zero;
                one--;
            }
        }
        return 0;
    }
};