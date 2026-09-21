class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int size = n*n;
        int maxLoad = (int)(maxWeight/w);
        if(size*w<=maxWeight) return size;
        return maxLoad;
    }
};