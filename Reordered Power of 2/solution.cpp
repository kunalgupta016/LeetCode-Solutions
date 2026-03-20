class Solution {
public:

    bool cmp(unordered_map<int,int> mp,unordered_map<int,int>mp1){
        int size1 = mp.size();
        int size = mp1.size();
        int mini = min(size,size1);
        for(int i = 0;i<10;i++){
            if(mp[i]!=mp1[i]) return false;
        }
        return true;
    }

    bool reorderedPowerOf2(int n) {
        unordered_map<int,int> mp;
        int temp = n;
        while(temp!=0){
            int digit = temp%10;
            mp[digit]++;
            temp/=10;
        }
        for(int i = 0;i<31;i++){
            int p = pow(2,i);
            int t = p;
            unordered_map<int,int> mp1;

            while(t!=0){
                mp1[t%10]++;
                t/=10;
            }
            if(cmp(mp,mp1)){
                return true;
            }
        }
        return false;
    }
};