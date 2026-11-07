#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>free;
        priority_queue<tuple<ll,ll,int>,vector<tuple<ll,ll,int>>,greater<tuple<ll,ll,int>>>busy;
        for(int i=0;i<servers.size();i++){
            free.push({servers[i],i});
        }
        int n = tasks.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!busy.empty()&&get<0>(busy.top())<=i){
                auto server = busy.top();
                busy.pop();
                free.push({get<1>(server),get<2>(server)});
            }
            if(!free.empty()){
                auto server = free.top();
                free.pop();
                ans[i]=server.second;
                busy.push({i+tasks[i],server.first,server.second});
            }else{
                auto ntserver = busy.top();
                busy.pop();
                ans[i]=get<2>(ntserver);
                busy.push({get<0>(ntserver)+tasks[i],get<1>(ntserver),get<2>(ntserver)});
            }
        }
        return ans;
    }
};