#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int i = num.size()-1;
        int sum = 0 , carry =0;
        while(i>=0 || k||carry!=0){
            sum=carry;
            if(i>=0){
                sum+=num[i];
            }
            sum+=k%10;
            k/=10;
            ans.push_back(sum%10);
            carry=sum/10;
        }
        int st = 0 , end = ans.size()-1;
        while(st<end){
            swap(ans[st],ans[end]);
        }
        return ans;
    }
};