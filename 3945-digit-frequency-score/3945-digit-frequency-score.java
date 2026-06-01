class Solution {
    public int digitFrequencyScore(int n) {
        Map<Integer,Integer> mp = new HashMap<>();
        while(n!=0){
            mp.put(n%10,mp.getOrDefault(n%10,0)+1);
            n = n/10;
        }
        int cnt = 0;

        for(Map.Entry<Integer,Integer> it:mp.entrySet()){
            cnt+=it.getKey()*it.getValue();
        }
        return cnt;
    }
}