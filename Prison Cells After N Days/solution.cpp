class Solution {
public:

    vector<int> nextDay(vector<int>&cells){
        vector<int> temp(cells.size());
        for(int i = 1;i<cells.size()-1;i++){
            temp[i] = cells[i-1]==cells[i+1]?1:0;
        }
        
        return temp;
    }

    string vectorToString(vector<int>& v)
{
    string s = "";
    for (int x : v) {
        s += to_string(x) + " ";
    }
    return s;
}


    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        if( cells.size()==0 || n<=0) return cells;
        bool hasCycl = false;
        unordered_set<string> st;
        int cycle = 0;
        for(int i = 0;i<n;i++){
            vector<int> next = nextDay(cells);
            string key = vectorToString(next);
            if(!st.count(key)){
                st.insert(key);
                cycle++;
            }else{
                hasCycl = true;
                break;
            }
            cells = next;
        }
        if(hasCycl){
            n= n%cycle;
            for(int i = 0;i<n;i++){
                cells = nextDay(cells);
            }
        }
        return cells;
    }
};