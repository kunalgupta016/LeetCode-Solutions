class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hbars, vector<int>& vbars) {
        int hcos = 1,hmax=1,vcos=1,vmax=1;
        sort(hbars.begin(),hbars.end());
        sort(vbars.begin(),vbars.end());

        for(int i = 1;i<hbars.size();i++){
            if(hbars[i]-hbars[i-1]==1){
                hcos++;
                hmax = max(hmax,hcos);
            }else{
                hcos = 1;
            }
        }

        for(int i = 1;i<vbars.size();i++){
            if(vbars[i]-vbars[i-1]==1){
                vcos++;
                vmax = max(vmax,vcos);
            }else{
                vcos = 1;
            }
        }

        return pow(min(vmax,hmax)+1,2);




    }
};