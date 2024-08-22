class OrderedStream {
public:
    string arr[10000];
    int currentPtr = 0;
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        arr[idKey-1] = value;
        vector<string> res;
        while(arr[currentPtr] != ""){
            res.push_back(arr[currentPtr]);
            currentPtr++;
        }
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
