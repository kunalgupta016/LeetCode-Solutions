class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      int n = hand.size();
      int k = groupSize;
      if(n%k!=0) return false;
      map<int,int> mp;
      for(int i:hand){
        mp[i]++;
      }
      while(!mp.empty()){
        int first = mp.begin()->first;
        for(int i = 0;i<k;i++){
            int crr = first + i;
            if(mp.find(crr)==mp.end()) return false;
            mp[crr]--;
            if(mp[crr]==0) mp.erase(crr);
            
        }
      }
      return true;
    } 
};