#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum(vector<int>& piles){
        int maxi = 0;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > maxi){
                maxi = piles[i];
            }
        }
        return maxi;
    }

    long long FindTotal(vector<int> &v, long long h){
        long long total = 0;
        for(int i = 0; i < v.size(); i++){
            total += (v[i] + h - 1) / h;  
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long s = 1;
        long long e = maximum(piles);

        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long total = FindTotal(piles, mid);

            if(total > h){
                s = mid + 1;  
            } else {
                e = mid - 1;  
            }
        }

        return (int)s;
    }
};
