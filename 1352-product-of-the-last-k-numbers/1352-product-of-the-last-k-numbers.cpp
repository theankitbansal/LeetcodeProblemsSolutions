class ProductOfNumbers {
public:
    vector<long long int>ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int index=ans.size()-k;
        int product=1;
        for(int i=index; i<ans.size(); i++){
            product=product*ans[i]*1LL;
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */