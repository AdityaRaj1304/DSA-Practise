#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        } else if (num == 2) {
            return true;
        } else if (num % 2 == 0) {
            return false;
        } else {
            for (int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
    bool completePrime(int num) {
        string n = to_string(num);
        unordered_set<int>s;
        for(int i =1;i<=n.size();i++){
            s.insert(stoi(n.substr(0,i)));
        }
        for(int i =0;i<n.size();i++){
            s.insert(stoi(n.substr(i)));
        }
        for(auto&it:s){
            if(!isPrime(it)){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        } else if (num == 2) {
            return true;
        } else if (num % 2 == 0) {
            return false;
        } else {
            for (int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
    bool completePrime(int num) {
        if(!isPrime(num)){
            return false;
        }
        int x = num;
        while(x){
            if(!isPrime(x)){
                return false;
            }
            x/=10;
        }
        int p=1;
        while(p<=num/10){
            p*=10;
        }
        x=num;
        while (p > 1) {
            x %= p;
            if (!isPrime(x))
                return false;
            p /= 10;
        }
        return true;
    }
};