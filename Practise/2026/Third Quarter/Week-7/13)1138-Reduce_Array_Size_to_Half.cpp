#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>freq;
        for(int num :arr){
            freq[num]++;
        }
        vector<int>count;
        for(auto&it:freq){
            count.push_back(it.second);
        }
        sort(count.begin(),count.end(),greater<int>());
        int ans =0;
        int remove =0;
        for(int i=0;i<count.size();i++){
            remove+=count[i];
            ans++;
            if(remove>=n/2){
                return ans;
            }
        }
        return -1;
    }
};

