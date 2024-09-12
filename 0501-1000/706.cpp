class MyHashMap {
public:
    vector<int> hash_set;
    MyHashMap() {
        hash_set = vector<int>(1000001,-1);
    }
    
    void put(int key, int value) {
        hash_set[key] = value;
    }
    
    int get(int key) {
        return hash_set[key];
    }
    
    void remove(int key) {
        hash_set[key] = -1;
    }
};

