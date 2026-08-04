#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>ans;
        // for(string s:folder){
        //     cout << s << " ";
        // }
        ans.push_back(folder[0]);
        for(int i =1;i<folder.size();i++){
            string prev = ans.back();
            prev.push_back('/');
            bool valid = false;
            string s = folder[i];
            for(int i =0;i<s.size()&&i<prev.size();i++){
                if(s[i]!=prev[i]){
                    valid=true;
                    break;
                }
            }
            if(valid){
                ans.push_back(s);
            }
        }
        return ans;
    }
};





