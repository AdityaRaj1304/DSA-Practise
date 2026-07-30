#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long countVowels(string word) {
        int n = word.size();
        ll ans = 0;
        for(int i =0;i<n;i++){
            char ch = word[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                ans+=(ll)(i+1)*(n-i);
            }
        }
        return ans;
    }
};






