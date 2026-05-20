#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int>&row:image){
            int i = 0 , j= row.size()-1;
            while(i<=j){
                if(i==j){
                    invert(row[i]);
                }else{
                invert(row[i]);
                invert(row[j]);
                swap(row[i],row[j]);
            }
            i++,j--;
        }
    }
        return image;
    }
    void invert(int&num){
        if(num==0){
            num=1;
        }else{
            num=0;
        }
    }
};