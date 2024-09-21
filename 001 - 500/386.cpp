

class Solution {
private:
    int getNext(int current ,int n){
        if(current * 10 <= n){
            return current*10;
        }
        if(current >= n){
            current /= 10;
        }

        current += 1;
        while(current % 10 == 0){
            current /=10;
        }
        return current;
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> arr;
        int current = 1;
        for(int i=1;i<=n;i++){
            arr.push_back(current);
            current = getNext(current,n);
        }
        return arr;
    }
};
