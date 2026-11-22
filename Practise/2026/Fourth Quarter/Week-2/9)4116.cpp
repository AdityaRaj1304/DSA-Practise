#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string>ans;
        int a = 0 , b=0;
        for(int i=0;i<n-1;i++){
            if(rain[i]==1){
                if(rain[i+1]==1&&a<=b){
                    ans.push_back("Alice");
                    a++;
                }else{
                    ans.push_back("Bob");
                    b++;
                }
            }else{
                ans.push_back("None");
            }
        }
        rain.back()==1?ans.push_back("Bob"):ans.push_back("None");
        return ans;
    }
};