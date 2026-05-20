#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans =0;
        int n = colors.size();
        if(colors[n-1]!=colors[0] && colors[0]!=colors[1]){
            ans++;
        }
        for(int i = 1;i<n-1;i++){
            if(colors[i-1]!=colors[i] && colors[i]!=colors[i+1]){
                ans++;
            }
        }
        if(colors[0]!=colors[n-1] && colors[n-1]!=colors[n-2]){
            ans++;
        }
        return ans;
    }
};



class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            int left = (n+i-1)%n;
            int right = (i+1)%n;
            if(colors[left]!=colors[i] && colors[i]!=colors[right]){
                ans++;
            }
        }
        return ans;
    }
};