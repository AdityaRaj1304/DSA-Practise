#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string ans ;
        int col = encodedText.size()/rows;
        for(int j = 0 ;j<col;j++){
            for(int x = 0 , y = j ; x<rows && y<col ; x++,y++){
                ans.push_back(encodedText[x*col + y]);
            }
        }
        int i = ans.size()-1;
        while(i>=0 && !isalpha(ans[i])){
            ans.pop_back();
            i--;
        }
        return ans;
    }
};