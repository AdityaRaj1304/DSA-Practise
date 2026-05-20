#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int prefixConnected(vector<string>& words, int k) {
//         int ans =0;
//         for(int i = 0 ;i<words.size();i++){
//             string s1 =words[i];
//             for(int j = i+1 ;j<words.size();j++){
//                 string s2=words[j];
//                 int count = 0;
//                 int x=0;
//                 while(x<s1.length()&&x<s2.length()){
//                     if(words[i][x]==words[j][x]){
//                         count++;
//                         if(count==k){
//                             ans++;
//                             break;
//                         }
//                         x++;
//                     }else{
//                         break;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int prefixConnected(vector<string>& words, int k) {
//         int ans = 0;
//         int n = words.size();
//         vector<bool>temp(n,false);
//         for(int i = 0 ; i<n;i++){
//             if(temp[i]==true){
//                 continue;
//             }
//             if(words[i].size()<k){
//                 continue;
//             }
//            int count =1;
//             for(int j = i+1;j<n;j++){
//                 if(temp[j]==true){
//                     continue;
//                 }
//                 if(words[j].size()<k){
//                 continue;
//             }
//                 bool common = true;
//                 for(int x = 0 ;x<k;x++){
//                     if(words[i][x]==words[j][x]){
//                         continue;
//                     }else{
//                         common=false;
//                         break;
//                     }
//                 }
//                 if(common){
//                     temp[j]=true;
//                     count++;
//                 }
//             }
//             if(count>1){
//                 temp[i]=true;
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        int ans =0;
        for(string w:words){
            if(w.length()>=k){
                string temp = w.substr(0,k);
                mp[temp]++;
            }
        }
        for(auto it:mp){
            if(it.second>=2){
                ans++;
            }
        }
        return ans;
    }
};