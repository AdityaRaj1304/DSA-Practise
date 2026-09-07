#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class ProductOfNumbers {
public:
    vector<int>product;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            product.clear();
        }else{
                    if(product.size()==0){
            product.push_back(num);
        }else{
            product.push_back(num*product.back());
        }
        }
    }
    
    int getProduct(int k) {
        if(k>product.size()){
            return 0;
        }else if(k==product.size()){
            return product.back();
        }
        return product.back()/product[product.size()-k-1];
    }
};
