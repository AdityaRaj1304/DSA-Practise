#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";
        int sum = 0, carry =0;
        int idx =0;
        while(idx<a.size() && idx<b.size()){
            sum=(a[idx]-'0'+b[idx]-'0')+carry;
            if(sum==2){
                sum =0;
                carry=1;
            }else if(sum==3){
                sum=1;
                carry=1;
            }else{
                carry=0;
            }
            ans+=(sum+'0');
            idx++;
        }
        while(idx<a.size()){
            sum=(a[idx]-'0')+carry;
            if(sum==2){
                sum =0;
                carry=1;
            }else{
                carry=0;
            }
            ans+=(sum+'0');
            idx++;
        }
        while(idx<b.size()){
            sum=(b[idx]-'0')+carry;
            if(sum==2){
                sum =0;
                carry=1;
            }else{
                carry=0;
            }
            ans+=(sum+'0');
            idx++;
        }
        if(carry){
            ans+=(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};