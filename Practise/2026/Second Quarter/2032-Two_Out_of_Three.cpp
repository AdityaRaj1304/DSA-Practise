#include <bits/stdc++.h>
using namespace std;


//Optimal Approach -BitMasking
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>seen(101,0);
        for(int num:nums1){
            seen[num]|=1;
        }
        for(int num:nums2){
            seen[num]|=2;
        }
        for(int num:nums3){
            seen[num]|=4;
        }
        vector<int>ans;
        for(int i =0;i<101;i++){
            if(seen[i]==3||seen[i]==5||seen[i]==6||seen[i]==7){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
//                               vector<int>& nums3) {
//         unordered_set<int> s1, s2, result;
//         for (int num : nums1) {
//             s1.insert(num);
//         }
//         for (int num : nums2) {
//             if (s1.find(num) != s1.end()) {
//                 result.insert(num);
//             } else {
//                 s2.insert(num);
//             }
//         }
//         for (int num : nums3) {
//             if (s1.find(num) != s1.end() || s2.find(num) != s2.end()) {
//                 result.insert(num);
//             }
//         }
//         vector<int> ans(result.begin(), result.end());
//         return ans;
//     }
// };

