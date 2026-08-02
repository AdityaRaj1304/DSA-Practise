#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;

class Solution {
public:
typedef tree<long long, null_type, less_equal<long long>, 
             rb_tree_tag, tree_order_statistics_node_update> pbds;
    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        ll ans =0;
        ll prefix =0;
        pbds os;
        os.insert(0);
        for(int i =0;i<n;i++){
            if(nums[i]%2==0){
                prefix+=b;
            }else{
                prefix-=a;
            }
            ll lower = os.order_of_key(prefix);
            os.insert(prefix);
            ans+=os.size()-lower;
        }
        return ans;
    }
};