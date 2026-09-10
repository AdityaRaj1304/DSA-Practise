#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int n = s1.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i =0;i<n;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        bool first = true , second = true;
        int sum1 = 0 , sum2 =0;
        for(int i =0;i<26;i++){
            sum1+=freq1[i];
            sum2+=freq2[i];
            if(sum1>sum2){
                second=false;
            }else if(sum1<sum2){
                first=false;
            }
        }
        return first||second;
    }
};

// class Solution { O(n log n)
// public:
//     bool checkIfCanBreak(string s1, string s2) {
//         int n = s1.size();
//         sort(s1.begin(),s1.end());
//         sort(s2.begin(),s2.end());
//         int i = 0;
//         while(s1[i]==s2[i]){
//             i++;
//         }
//         if(i==n||i==n-1){
//             return true;
//         }
//         bool first = true;
//         if(s1[i]<s2[i]){
//             first=false;
//         }
//         i++;
//         if(first){
//             while(i<n){
//                 if(s1[i]<s2[i]){
//                     return false;
//                 }
//                 i++;
//             }
//         }else{
//             while(i<n){
//                 if(s1[i]>s2[i]){
//                     return false;
//                 }
//                 i++;
//             }
//         }
//         return true;
//     }
// };


