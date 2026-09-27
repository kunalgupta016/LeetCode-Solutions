class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==1){
            return target[0]==1;
        }

        int n = target.size();
        long long sum = 0;
        priority_queue<long long> pq;

        for(int i :target){
            sum+=i;
            pq.push(i);
        }

        while(pq.top()!=1){

            long long largest = pq.top();
            pq.pop();

            long long bachGye = sum-largest;
            if(bachGye<=0 || bachGye>=largest){
                return false;
            }

            long long updatedElement = largest%(bachGye);

            if(updatedElement==0){
                return bachGye==1;
            }
            sum = bachGye+updatedElement;
            pq.push(updatedElement);


        }


        return true;


    }
};