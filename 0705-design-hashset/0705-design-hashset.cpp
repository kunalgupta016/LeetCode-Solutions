class MyHashSet {
public:

    vector<list<int>> table;
    int size = 1000;

    MyHashSet() {
        table.resize(size) ;
   }

   int hash(int idx){
    return idx%size;
   }
    
    void add(int key) {
        int idx = hash(key);
        for(int x:table[idx]){
            if(x==key){
                return;
            }

        }
        table[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        table[idx].remove(key);
    }
    
    bool contains(int key) {
        int idx = hash(key);

        for(int x : table[idx]){
            if(x == key) return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */