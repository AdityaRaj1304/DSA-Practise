#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int n = apples.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int ans =0;
        int i = 0;
        while(i<n || !pq.empty()){
            if(i<n && apples[i]>0){
                pq.push({days[i]+i,apples[i]});
            }
            while(!pq.empty()&&pq.top().first<=i){
                pq.pop();
            }
            if(!pq.empty()){
                auto curr = pq.top();
                pq.pop();
                curr.second--;
                ans++;
                if(curr.second){
                    pq.push(curr);
                }
            }
            i++;
        }
        return ans;
    }
};