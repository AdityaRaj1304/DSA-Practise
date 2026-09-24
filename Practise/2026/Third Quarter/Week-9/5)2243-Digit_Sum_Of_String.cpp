#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution { //Modified
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string temp = "";
            for(int i =0;i<s.size();i+=k){
                int sum =0;
                for(int j=i;j<i+k&&j<s.size();j++){
                    sum+=s[j]-'0';
                }
                temp+=to_string(sum);
            }
            s=temp;
        }
        return s;
    }
};

class Solution {
public:
    string digitSum(string s, int k) {
        string ans = s;
        string temp = s;
        while(true){
            if(ans.size()<=k){
                return ans;
            }
            ans="";
            int len =0;
            int sum =0;
            for(int i=0;i<temp.size();i++){
                if(len==k){
                    ans+=to_string(sum);
                    len=0;
                    sum=0;
                }
                sum+=temp[i]-'0';
                len++;
            }
            ans+=to_string(sum);
            temp=ans;
        }
        return "";
    }
};