#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = requests[0];
        int curr = requests[0];
        for(int i =1;i<requests.size();i++){
            ans+=abs(requests[i]-curr);
            curr=requests[i];
        }
        return ans;
    }
};

