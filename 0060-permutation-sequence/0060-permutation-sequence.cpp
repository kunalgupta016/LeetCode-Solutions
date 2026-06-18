class Solution {
public:

    vector<string> result;
    vector<bool> visited;


    void solve(int n , string permutation){
        if(permutation.size()==n){

            result.push_back(permutation);
            return ;

        }

        for(int i = 1;i<=n;i++){

            if(!visited[i]){
                visited[i] = true;
                permutation.push_back(i+'0');
                solve(n,permutation);
                visited[i] = false;
                permutation.pop_back();

            }


        }
        
    }

    string getPermutation(int n, int k) {
        visited.assign(n+1,false);
        string permutation = "";
        solve(n,permutation);
        return result[k-1];
    }
};