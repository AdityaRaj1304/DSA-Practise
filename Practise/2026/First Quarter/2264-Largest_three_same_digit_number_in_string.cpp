#include<bits/stdc++.h>
using namespace std;

class Solution { // My Approach 
public:
    string largestGoodInteger(string num) { 
        string ans = "";
        for(int i = 1; i < num.size()-1; i++){
            if(num[i-1] == num[i] && num[i] == num[i+1]){
                string temp = string(3, num[i]);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

