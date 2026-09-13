#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using ll = long long;
using namespace __gnu_pbds;

typedef tree<pair<ll,int>, null_type, less<pair<ll,int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
class Solution {
public:
    long long distantSubarrays(vector<int>& nums, int goal, int k) {
        int n = nums.size();
        ll ans = 0;
        pbds os;
        ll pfx = 0;
        ll high = (ll)goal+k;
        ll low = (ll)goal-k;
        os.insert({0LL,-1});
        for(int i =0;i<n;i++){
            pfx+=nums[0];
            ans+=os.order_of_key({pfx-high,INT_MAX});
            ans+=os.size()-os.order_of_key({pfx-low,-1});
            os.insert({pfx,i});
        }
        return ans;
    }
};