class Solution {
public:

    int convert(string s , vector<int> days){
        int m = (s[0]-'0')*10 + (s[1]-'0');
        int d = (s[3]-'0')*10 + (s[4]-'0');
        int res = d;
        for(int i = 0;i<m-1;i++){
            res += days[i];
        }
        return res;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int aStart =convert(arriveAlice,days);
        int aEnd =convert(leaveAlice,days);
        int bStart =convert(arriveBob,days);
        int bEnd =convert(leaveBob,days);
        int start = max(aStart,bStart);
        int end = min(aEnd,bEnd);
        return start<=end?end-start+1:0;

    }
};