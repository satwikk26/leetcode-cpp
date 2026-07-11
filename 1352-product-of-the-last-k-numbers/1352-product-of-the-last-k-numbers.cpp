class ProductOfNumbers {
public:
    vector<int>nums;
    int n;
    ProductOfNumbers() {
        nums.clear();
        n=0;
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int a=nums.size()-1;
        int p=1;
        while(k>0)
        {
            p*=nums[a];
            a--;
            k--;
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */