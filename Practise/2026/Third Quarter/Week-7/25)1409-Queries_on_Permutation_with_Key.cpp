#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>ans;
        list<int>l;
        for(int i =1;i<=m;i++){
            l.push_back(i);
        }
        for(auto q:queries){
            int idx = 0;
            for(auto it=l.begin();it!=l.end();it++,idx++){
                if(*it==q){
                    ans.push_back(idx);
                    int x = *it;
                    l.erase(it);
                    l.push_front(x);
                    break;
                }
            }
        }
        return ans;
    }
};