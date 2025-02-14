class ProductOfNumbers {
public:
    vector<int> products;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        products.push_back(num);
    }
    
    int getProduct(int k) {
        int sum = 1;
        int n = products.size();
        
        for(int i=n-k;i<n;i++){
            
            sum *= products[i];
        }
        return sum;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
