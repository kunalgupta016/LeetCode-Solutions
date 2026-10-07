class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int c = 0,r=0,o=0,a=0,k=0;
        int ans = 0;
        for(char ch:croakOfFrogs){
            if(ch=='c'){
                c++;
                ans = max(ans,c-k);
            }
            else if(ch=='r'){
                r++;
                if(r>c)return -1;
            }
            else if(ch=='o'){
                o++;
                if(o>r)return -1;
            }
            else if(ch=='a'){
                a++;
                if(a>o)return -1;
            }
            else if(ch=='k'){
                k++;
                if(k>a)return -1;
            }
            
            
        }
         if (c != r || r != o || o != a || a != k)
            return -1;

        return ans;


    }
};