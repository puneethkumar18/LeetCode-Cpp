class MyHashSet {
public:
    vector<bool> hash_set;
    MyHashSet() {
        hash_set = vector<bool>(10000001,false);
    }
    
    void add(int key) {
        hash_set[key] = true;
    }
    
    void remove(int key) {
        hash_set[key] = false;
    }
    
    bool contains(int key) {
        return hash_set[key] == true;
    }
};
 
