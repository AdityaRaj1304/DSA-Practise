#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int>months={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int helper(string date){
        int day = stoi(date.substr(3, 2));
        int month = stoi(date.substr(0, 2));
        for (int i = 0; i < month - 1; i++) {
            day += months[i];
        }
        return day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceSt = helper(arriveAlice);
        int aliceEnd = helper(leaveAlice);
        int bobSt= helper(arriveBob);
        int bobEnd = helper(leaveBob);
        cout << aliceSt << " " << aliceEnd << endl;
        cout << bobSt << " " << bobEnd;
        int start = max(aliceSt, bobSt);
        int end = min(aliceEnd, bobEnd);
        int ans = max(0, end - start + 1);
    }
};


