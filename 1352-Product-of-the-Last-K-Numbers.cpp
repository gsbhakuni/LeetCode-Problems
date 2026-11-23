class ProductOfNumbers {
public:
    vector<long long>v;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        if(v.size() == 0){
            if(num) v.push_back(num);
        } else {
            if(num){
                long long k = num * v[v.size()-1];
                v.push_back(k);
            } else {
                v.clear();
            }
        }
    }
    
    int getProduct(int k) {
        if(k > v.size()) return 0;
        if(k == v.size()) return v[v.size()-1];
        return v[v.size()-1] / v[v.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */