class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long dummymass = mass;
        for(int i = 0;i<asteroids.size();i++){
            if(asteroids[i]<=dummymass){
                dummymass+=asteroids[i];
            }else{
                return false;
            }
        }
        return true;

    }
};